// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from general.djinni

#import "MSOPlayer+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto Player::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::String::toCpp(obj.clubId),
            ::djinni::String::toCpp(obj.email),
            ::djinni::String::toCpp(obj.gender),
            ::djinni::String::toCpp(obj.hcp),
            ::djinni::String::toCpp(obj.imageUrl),
            ::djinni::String::toCpp(obj.lastName),
            ::djinni::String::toCpp(obj.firstName),
            ::djinni::String::toCpp(obj.phone),
            ::djinni::String::toCpp(obj.slope),
            ::djinni::String::toCpp(obj.ts)};
}

auto Player::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MSOPlayer alloc] initWithClubId:(::djinni::String::fromCpp(cpp.clubId))
                                       email:(::djinni::String::fromCpp(cpp.email))
                                      gender:(::djinni::String::fromCpp(cpp.gender))
                                         hcp:(::djinni::String::fromCpp(cpp.hcp))
                                    imageUrl:(::djinni::String::fromCpp(cpp.imageUrl))
                                    lastName:(::djinni::String::fromCpp(cpp.lastName))
                                   firstName:(::djinni::String::fromCpp(cpp.firstName))
                                       phone:(::djinni::String::fromCpp(cpp.phone))
                                       slope:(::djinni::String::fromCpp(cpp.slope))
                                          ts:(::djinni::String::fromCpp(cpp.ts))];
}

}  // namespace djinni_generated
