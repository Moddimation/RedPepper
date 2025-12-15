

# File seadRuntimeTypeInfo.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**prim**](dir_1a578c5b4e159d1e927e1144c21e6f5b.md) **>** [**seadRuntimeTypeInfo.h**](seadRuntimeTypeInfo_8h.md)

[Go to the documentation of this file](seadRuntimeTypeInfo_8h.md)


```C++
#ifndef SEAD_RUNTIMETYPEINFO_H_
#define SEAD_RUNTIMETYPEINFO_H_

#include <basis/seadTypes.h>

namespace sead {
namespace RuntimeTypeInfo {
class Interface {
public:
    Interface() {}

    virtual bool isDerived(const Interface* typeInfo) const = 0;
};

class Root : public Interface {
public:
    Root() {}

    virtual bool isDerived(const Interface* typeInfo) const { return typeInfo == this; }
};

template <typename BaseType>
class Derive : public Interface {
public:
    Derive() {}

    virtual bool isDerived(const Interface* typeInfo) const {
        if (this == typeInfo)
            return true;

        const RuntimeTypeInfo::Interface* rootTypeInfo = BaseType::getRuntimeTypeInfoStatic();
        return rootTypeInfo->isDerived(typeInfo);
    }
};

}  // namespace RuntimeTypeInfo

template <typename DerivedType, typename Type>
inline bool IsDerivedFrom(const Type* obj) {
    const RuntimeTypeInfo::Interface* typeInfo = DerivedType::getRuntimeTypeInfoStatic();
    return obj != nullptr && obj->checkDerivedRuntimeTypeInfo(typeInfo);
}

template <typename DerivedType, typename Type>
inline DerivedType* DynamicCast(Type* obj) {
    if (IsDerivedFrom<DerivedType, Type>(obj))
        return static_cast<DerivedType*>(obj);

    return nullptr;
}

}  // namespace sead

#define SEAD_RTTI_BASE(CLASS)                                                                      \
public:                                                                                            \
    static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() {                    \
        static const sead::RuntimeTypeInfo::Root typeInfo;                                         \
        return &typeInfo;                                                                          \
    }                                                                                              \
                                                                                                   \
    static bool checkDerivedRuntimeTypeInfoStatic(                                                 \
        const sead::RuntimeTypeInfo::Interface* typeInfo) {                                        \
        const sead::RuntimeTypeInfo::Interface* clsTypeInfo = CLASS::getRuntimeTypeInfoStatic();   \
        return typeInfo == clsTypeInfo;                                                            \
    }                                                                                              \
                                                                                                   \
    virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const {                   \
        return getRuntimeTypeInfoStatic();                                                         \
    }

#define SEAD_RTTI_OVERRIDE(CLASS, BASE)                                                            \
public:                                                                                            \
    static const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() {                    \
        static const sead::RuntimeTypeInfo::Derive<BASE> typeInfo;                                 \
        return &typeInfo;                                                                          \
    }                                                                                              \
                                                                                                   \
    static bool checkDerivedRuntimeTypeInfoStatic(                                                 \
        const sead::RuntimeTypeInfo::Interface* typeInfo)                                          \
                                                                                                   \
    {                                                                                              \
        const sead::RuntimeTypeInfo::Interface* clsTypeInfo = CLASS::getRuntimeTypeInfoStatic();   \
        if (typeInfo == clsTypeInfo)                                                               \
            return true;                                                                           \
                                                                                                   \
        return BASE::checkDerivedRuntimeTypeInfoStatic(typeInfo);                                  \
    }                                                                                              \
                                                                                                   \
    virtual const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo() const {                   \
        return getRuntimeTypeInfoStatic();                                                         \
    }

#endif  // SEAD_RUNTIMETYPEINFO_H_
```


