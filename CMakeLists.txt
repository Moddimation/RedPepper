cmake_minimum_required(VERSION 3.24)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/project/ARMCC.cmake)
include(${CMAKE_SOURCE_DIR}/project/Toolchain.cmake)
set_toolchain()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(lib/ctrsdk)
add_subdirectory(lib/sead)
add_subdirectory(lib/ms)

project(RedPepper C CXX ASM)

if(WIN32)
    set(LOCALE_FLAG --locale=japanese)
else()
    set(LOCALE_FLAG --locale=ja_JP.SJIS)
endif()

set(CMAKE_EXECUTABLE_SUFFIX ".axf")

__compiler_armcc(C)
__compiler_armcc(CXX)
__compiler_armcc(ASM)

file(GLOB_RECURSE SOURCES_AL ${CMAKE_SOURCE_DIR}/lib/al/src/*.c ${CMAKE_SOURCE_DIR}/lib/al/src/*.cpp)
file(GLOB_RECURSE SOURCES_GAME ${CMAKE_SOURCE_DIR}/Game/src/*.c ${CMAKE_SOURCE_DIR}/Game/src/*.cpp)

add_executable(RedPepper $<TARGET_OBJECTS:crt0> ${SOURCES_AL} ${SOURCES_GAME})

target_link_libraries(RedPepper PUBLIC ctrsdk)
target_link_libraries(RedPepper PUBLIC sead)
target_link_libraries(RedPepper PUBLIC ms)

target_link_options(RedPepper PUBLIC
    --cpu=MPCore --entry=__ctr_start --startup=__ctr_start --library_type=standardlib
    --ref_cpp_init --scanlib --legacyalign
    --tailreorder --no_remove --datacompressor=off --arm_only
    --inline --diag_suppress=L6314W --diag_suppress=L6329W
    --verbose --mangled --symbols --paged
    --scatter=${CMAKE_CURRENT_BINARY_DIR}/linker.ld
    )

target_compile_options(RedPepper PUBLIC
    --apcs=//interwork --arm
    --cpu=MPCore --fpmode=fast -Otime
    --data-reorder --split_sections
    --multibyte-chars --signed_chars
    --preinclude=${CMAKE_SOURCE_DIR}/lib/ctrsdk/include/nn/types.h
    ${LOCALE_FLAG}
    >)

target_compile_options(RedPepper PUBLIC $<$<COMPILE_LANGUAGE:C>:--c99>)
target_compile_options(RedPepper PUBLIC $<$<COMPILE_LANGUAGE:CXX>:
    --cpp --force_new_nothrow --no_vfe # workaround, vfe should be enabled
    --no_rtti_data --no_rtti --no_exceptions
    -O3 -Otime --forceinline
    >)


target_compile_definitions(RedPepper PUBLIC ctr)
if (NON_MATCHING)
    target_compile_definitions(RedPepper PUBLIC NON_MATCHING)
endif()

target_include_directories(RedPepper PUBLIC Game/include)
target_include_directories(RedPepper PUBLIC lib/al/include)
