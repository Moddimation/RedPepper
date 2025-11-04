cmake_minimum_required(VERSION 3.24)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/ARMCC.cmake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT DEFINED ENV{ARMCC_PATH})
    message(FATAL_ERROR "please set ARMCC_PATH")
endif()

find_program(ARM_ASM NAMES armasm.exe PATHS $ENV{ARMCC_PATH}/bin REQUIRED NO_DEFAULT_PATH)
find_program(ARM_AR NAMES armar.exe PATHS $ENV{ARMCC_PATH}/bin REQUIRED NO_DEFAULT_PATH)
find_program(ARM_CC NAMES armcc.exe PATHS $ENV{ARMCC_PATH}/bin REQUIRED NO_DEFAULT_PATH)
find_program(ARM_LINK NAMES armlink.exe PATHS $ENV{ARMCC_PATH}/bin REQUIRED NO_DEFAULT_PATH)
# find_program(ARM_FROMELF NAMES fromelf.exe PATHS $ENV{ARMCC_PATH}/bin REQUIRED NO_DEFAULT_PATH) # not important

add_subdirectory(lib/ctrsdk)
add_subdirectory(lib/sead)
add_subdirectory(lib/ms)

macro (set_compilers)
    set(CMAKE_CXX_COMPILER_ID ARMCC)

    set(CMAKE_AR ${ARM_AR})
    set(CMAKE_C_COMPILER ${ARM_CC})
    set(CMAKE_CXX_COMPILER ${ARM_CC})
    set(CMAKE_ASM_COMPILER ${ARM_ASM})
    set(CMAKE_LINKER ${ARM_LINK})
endmacro()

if (WIN32)
    set_compilers()
    set(CMAKE_C_COMPILER_WORKS TRUE)
    set(CMAKE_CXX_COMPILER_WORKS TRUE)
    set(CMAKE_ASM_COMPILER_WORKS TRUE)
endif()

project(RedPepper C CXX ASM)

if (NOT WIN32)
    set_compilers()
endif()

set(CMAKE_EXECUTABLE_SUFFIX ".axf")

__compiler_armcc(C)
__compiler_armcc(CXX)
__compiler_armcc(ASM)

file(GLOB_RECURSE SOURCES_AL ${CMAKE_SOURCE_DIR}/lib/al/src/*.c ${CMAKE_SOURCE_DIR}/lib/al/src/*.cpp)
file(GLOB_RECURSE SOURCES_GAME ${CMAKE_SOURCE_DIR}/Game/src/*.c ${CMAKE_SOURCE_DIR}/Game/src/*.cpp)

add_executable(RedPepper $<TARGET_OBJECTS:crt0> ${SOURCES_AL} ${SOURCES_GAME})

target_link_libraries(RedPepper PUBLIC 
                                ctrsdk
                                sead
                                ms
                                )

target_link_options(RedPepper PUBLIC
    --cpu=MPCore --entry=__ctr_start --startup=__ctr_start --library_type=standardlib
    --ref_cpp_init --scanlib --legacyalign
    --tailreorder --no_remove --datacompressor=off --arm_only
    --inline 
    --verbose --mangled --symbols --paged
    --scatter=${CMAKE_CURRENT_BINARY_DIR}/linker.ld
    )

target_compile_options(RedPepper PUBLIC $<$<COMPILE_LANGUAGE:CXX>:
    --apcs=//interwork --cpu=MPCore --fpmode=fast --cpp --arm --force_new_nothrow
    --signed_chars --multibyte-chars --locale=japanese --no_vfe # workaround, vfe should be enabled
    --no_rtti_data --no_rtti --no_exceptions -O3 -Otime --data-reorder --split_sections --forceinline
    --preinclude=${CMAKE_SOURCE_DIR}/lib/ctrsdk/include/nn/types.h
    >)

target_compile_options(RedPepper PUBLIC $<$<COMPILE_LANGUAGE:C>:
    --apcs=//interwork --cpu=MPCore --fpmode=fast --c99 --arm
    --signed_chars --multibyte-chars --locale=japanese
    -Otime --data-reorder --split_sections
    --preinclude=${CMAKE_SOURCE_DIR}/lib/ctrsdk/include/nn/types.h
    >)

target_compile_definitions(RedPepper PUBLIC ctr)

target_include_directories(RedPepper PUBLIC ${CMAKE_SOURCE_DIR}/Game/include  ${CMAKE_SOURCE_DIR}/lib/al/include)
