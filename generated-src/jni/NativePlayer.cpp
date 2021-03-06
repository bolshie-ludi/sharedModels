// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from general.djinni

#include "NativePlayer.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativePlayer::NativePlayer() = default;

NativePlayer::~NativePlayer() = default;

auto NativePlayer::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativePlayer>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.clubId)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.email)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.gender)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.hcp)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.imageUrl)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.lastName)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.firstName)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.phone)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.slope)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.ts)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativePlayer::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 11);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativePlayer>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mClubId)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mEmail)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mGender)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mHcp)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mImageUrl)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mLastName)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mFirstName)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mPhone)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mSlope)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_mTs))};
}

}  // namespace djinni_generated
