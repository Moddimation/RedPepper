

# File seadSafeString.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadSafeString.h**](sead_safe_string_8h.md)

[Go to the documentation of this file](sead_safe_string_8h.md)


```C++
#pragma once

#include <stdarg.h>
#include <basis/seadRawPrint.h>
#include <basis/seadTypes.h>

namespace sead {

template <typename T>
class SafeStringBase {
public:
    virtual ~SafeStringBase() {}

    virtual void assureTerminationImpl_() const {};

    SafeStringBase() : mStringTop(&cNullChar) {}

    SafeStringBase(const T* str) : mStringTop(str) {
        SEAD_ASSERT_MSG(str != nullptr, "str must not be nullptr.");
    }

    SafeStringBase(const SafeStringBase& other);

    inline const T* cstr() const {
        assureTerminationImpl_();
        return mStringTop;
    }

    bool isEqual(const SafeStringBase<T>& str) const;

    static const T cNullChar = 0;
    static const T cLineBreakChar;
    static const SafeStringBase cEmptyString;
    static const s32 cMaximumLength = 0x80000;

protected:
    const T& unsafeAt_(s32 idx) const { return mStringTop[idx]; }

    const T* mStringTop;
};

typedef SafeStringBase<char> SafeString;

template <typename T>
class BufferedSafeStringBase : public SafeStringBase<T> {
public:
    __attribute__((always_inline)) BufferedSafeStringBase(T* buffer, s32 size)
        : SafeStringBase<T>(buffer) {
        mBufferSize = size;
        if (size <= 0) {
            SEAD_ASSERT_MSG(false, "Invalied buffer size(%d).\n", this->getBufferSize());
            this->mStringTop = nullptr;
            this->mBufferSize = 0;
        } else {
            this->assureTerminationImpl_();
        }
    }

    BufferedSafeStringBase(const BufferedSafeStringBase&);

    const T& operator[](s32 idx) const;

    T* getBuffer() { return getMutableStringTop_(); }

    s32 getBufferSize() const { return mBufferSize; }

    s32 copy(const SafeStringBase<T>& src, s32 copyLength = -1);
    inline s32 copyAt(s32 at, const SafeStringBase<T>& src, s32 copyLength = -1);
    inline s32 cutOffCopy(const SafeStringBase<T>& src, s32 copyLength = -1);
    inline s32 cutOffCopyAt(s32 at, const SafeStringBase<T>& src, s32 copyLength = -1);
    inline s32 copyAtWithTerminate(s32 at, const SafeStringBase<T>& src, s32 copyLength = -1);

    s32 format(const T* format, ...);
    s32 formatV(const T* format, va_list args);
    s32 appendWithFormat(const T* formatStr, ...);
    s32 appendWithFormatV(const T* formatStr, va_list args);

    s32 append(const SafeStringBase<T>& str, s32 append_length = -1);

    s32 append(T c) { return append(c, 1); }

    s32 append(T c, s32 n);

    // Implementation note: These member functions appear to be inlined in most titles.
    // However, StringBuilderBase<T> conveniently duplicates the APIs and implementations of
    // SafeStringBase<T> and BufferedSafeString<T>: some assertion messages are even identical,
    // and the good news is that most StringBuilderBase<T> functions are not inlined!

    s32 prepend(const SafeStringBase<T>& str, s32 prepend_length = -1);

    s32 chop(s32 num);
    s32 chopMatchedChar(T c);
    s32 chopMatchedChar(const T* characters);
    s32 chopUnprintableAsciiChar();

    s32 rstrip(const T* characters);
    s32 rstripUnprintableAsciiChars();

    inline s32 trim(s32 trim_length);
    inline s32 trimMatchedString(const SafeStringBase<T>& suffix);

    inline s32 removeSuffix(const SafeStringBase<T>& suffix) { return trimMatchedString(suffix); }

    inline s32 replaceChar(T old_char, T new_char);
    inline s32 replaceCharList(const SafeStringBase<T>& old_chars,
                               const SafeStringBase<T>& new_chars);
    inline s32 setReplaceString(const SafeStringBase<T>& target_str,
                                const SafeStringBase<T>& old_str, const SafeStringBase<T>& new_str);
    inline s32 replaceString(const SafeStringBase<T>& old_str, const SafeStringBase<T>& new_str);

    s32 convertFromMultiByteString(const SafeStringBase<char>& str, s32 str_length);
    s32 convertFromWideCharString(const SafeStringBase<char16>& str, s32 str_length);

    inline void clear() { getMutableStringTop_()[0] = this->cNullChar; }

protected:
    T* getMutableStringTop_() { return const_cast<T*>(this->mStringTop); }

    static s32 formatImpl_(T* dst, s32 dst_size, const T* format, va_list arg);

    template <typename OtherType>
    s32 convertFromOtherType_(const SafeStringBase<OtherType>& src, s32 src_size);

    s32 mBufferSize;
};

template <typename T, s32 L>
class FixedSafeStringBase : public BufferedSafeStringBase<T> {
public:
    FixedSafeStringBase() : BufferedSafeStringBase<T>(mBuffer, L) { this->clear(); }

    FixedSafeStringBase(const SafeStringBase<T>& str) : BufferedSafeStringBase<T>(mBuffer, L) {
        this->copy(str);
    }

    FixedSafeStringBase(const FixedSafeStringBase& str) : BufferedSafeStringBase<T>(mBuffer, L) {
        this->copy(str);
    }

    FixedSafeStringBase& operator=(const FixedSafeStringBase& other) {
        this->copy(other);
        return *this;
    }

    T mBuffer[L];
};

typedef SafeStringBase<char> SafeString;
typedef SafeStringBase<char16> WSafeString;
typedef BufferedSafeStringBase<char> BufferedSafeString;
typedef BufferedSafeStringBase<char16> WBufferedSafeString;

template <>
s32 BufferedSafeStringBase<char>::format(const char* formatStr, ...);
template <>
s32 BufferedSafeStringBase<char16>::format(const char16* formatStr, ...);
template <>
s32 BufferedSafeStringBase<char>::formatV(const char* formatStr, va_list args);
template <>
s32 BufferedSafeStringBase<char16>::formatV(const char16* formatStr, va_list args);
template <>
s32 BufferedSafeStringBase<char>::appendWithFormat(const char* formatStr, ...);
template <>
s32 BufferedSafeStringBase<char16>::appendWithFormat(const char16* formatStr, ...);
template <>
s32 BufferedSafeStringBase<char>::appendWithFormatV(const char* formatStr, va_list args);
template <>
s32 BufferedSafeStringBase<char16>::appendWithFormatV(const char16* formatStr, va_list args);

template <s32 L>
class FixedSafeString : public FixedSafeStringBase<char, L> {
public:
    FixedSafeString() : FixedSafeStringBase<char, L>() {}

    FixedSafeString(const SafeString& str) : FixedSafeStringBase<char, L>(str) {}

    FixedSafeString(const FixedSafeString& other)
        : FixedSafeString(static_cast<const SafeString&>(other)) {}

    FixedSafeString& operator=(const FixedSafeString& other) {
        this->copy(other);
        return *this;
    }
};

}  // namespace sead
```


