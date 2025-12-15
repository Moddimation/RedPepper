

# File seadBitFlag.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadBitFlag.h**](seadBitFlag_8h.md)

[Go to the documentation of this file](seadBitFlag_8h.md)


```C++
#pragma once

#include <basis/seadRawPrint.h>
#include <basis/seadTypes.h>

namespace sead {
class BitFlagUtil {
public:
    static int countOnBit(u32 x);

    static int countContinuousOffBitFromRight(u32 x) { return countOnBit((x & -x) - 1); }

    static int countRightOnBit(u32 x, int bit);
    static int findOnBitFromRight(u32 x, int num);
};

template <typename T>
class BitFlag {
public:
    BitFlag() : mBits(0) {}

    BitFlag(T bits) : mBits(bits) {}

    operator T() const { return mBits; }

    void makeAllZero() { mBits = 0; }

    void makeAllOne() { mBits = ~T(0); }

    void setDirect(T bits) { mBits = bits; }

    T getDirect() const { return mBits; }

    T* getPtr() { return &mBits; }

    const T* getPtr() const { return &mBits; }

    size_t getByteSize() const { return sizeof(T); }

    void set(T val) { mBits |= val; }

    void reset(T val) { mBits &= ~val; }

    void toggle(T val) { mBits ^= val; }

    void change(T val, bool on) {
        if (on)
            set(val);
        else
            reset(val);
    }

    bool isZero() const { return mBits == 0; }

    bool isOn(T val) const { return (mBits & val) != 0; }

    bool isOnAll(T val) const { return (mBits & val) == val; }

    bool isOff(T val) const { return !isOn(val); }

    bool testAndClear(T val) {
        if (!isOn(val))
            return false;
        reset(val);
        return true;
    }

    // TODO: what is this even supposed to do? (This function is known to exist
    //       because it is present in debug info for pead in Super Mario Run.)
    T getMask(T v) const;

    static T makeMask(int bit) { return T(1) << bit; }

    void setBit(int bit) { set(makeMask(bit)); }

    void resetBit(int bit) { reset(makeMask(bit)); }

    void changeBit(int bit, bool on) { change(makeMask(bit), on); }

    void toggleBit(int bit) { toggle(makeMask(bit)); }

    bool isOnBit(int bit) const { return isOn(makeMask(bit)); }

    bool isOffBit(int bit) const { return isOff(makeMask(bit)); }

    bool testAndClearBit(int bit) { return testAndClear(makeMask(bit)); }

    int countOnBit() const { return BitFlagUtil::countOnBit(mBits); }

    int countContinuousOffBitFromRight() const {
        return BitFlagUtil::countContinuousOffBitFromRight(mBits);
    }

    int countRightOnBit(int bit) const { return BitFlagUtil::countRightOnBit(mBits, bit); }

    int findOnBitFromRight(int num) const { return BitFlagUtil::findOnBitFromRight(mBits, num); }

protected:
    T mBits;
};

typedef BitFlag<u8> BitFlag8;
typedef BitFlag<u16> BitFlag16;
typedef BitFlag<u32> BitFlag32;

}  // namespace sead
```


