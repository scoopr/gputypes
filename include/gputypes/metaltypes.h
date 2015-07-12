#ifndef metaltypes_h
#define metaltypes_h

#ifndef __has_feature
#define __has_feature(x) 0
#endif

#if defined(__cplusplus) && __has_feature(cxx_relaxed_constexpr)
#define METALTYPES_CONSTEXPR constexpr
#else
#define METALTYPES_CONSTEXPR static inline
#endif

#include "gputypes.h"

METALTYPES_CONSTEXPR const char *metaltypes_typeName(MTLDataType type) {
    switch (type) {
    case MTLDataTypeNone:
        return "MTLDataTypeNone";

    case MTLDataTypeStruct:
        return "MTLDataTypeStruct";
    case MTLDataTypeArray:
        return "MTLDataTypeArray";

    case MTLDataTypeFloat:
        return "MTLDataTypeFloat";
    case MTLDataTypeFloat2:
        return "MTLDataTypeFloat2";
    case MTLDataTypeFloat3:
        return "MTLDataTypeFloat3";
    case MTLDataTypeFloat4:
        return "MTLDataTypeFloat4";

    case MTLDataTypeFloat2x2:
        return "MTLDataTypeFloat2x2";
    case MTLDataTypeFloat2x3:
        return "MTLDataTypeFloat2x3";
    case MTLDataTypeFloat2x4:
        return "MTLDataTypeFloat2x4";

    case MTLDataTypeFloat3x2:
        return "MTLDataTypeFloat3x2";
    case MTLDataTypeFloat3x3:
        return "MTLDataTypeFloat3x3";
    case MTLDataTypeFloat3x4:
        return "MTLDataTypeFloat3x4";

    case MTLDataTypeFloat4x2:
        return "MTLDataTypeFloat4x2";
    case MTLDataTypeFloat4x3:
        return "MTLDataTypeFloat4x3";
    case MTLDataTypeFloat4x4:
        return "MTLDataTypeFloat4x4";

    case MTLDataTypeHalf:
        return "MTLDataTypeHalf";
    case MTLDataTypeHalf2:
        return "MTLDataTypeHalf2";
    case MTLDataTypeHalf3:
        return "MTLDataTypeHalf3";
    case MTLDataTypeHalf4:
        return "MTLDataTypeHalf4";

    case MTLDataTypeHalf2x2:
        return "MTLDataTypeHalf2x2";
    case MTLDataTypeHalf2x3:
        return "MTLDataTypeHalf2x3";
    case MTLDataTypeHalf2x4:
        return "MTLDataTypeHalf2x4";

    case MTLDataTypeHalf3x2:
        return "MTLDataTypeHalf3x2";
    case MTLDataTypeHalf3x3:
        return "MTLDataTypeHalf3x3";
    case MTLDataTypeHalf3x4:
        return "MTLDataTypeHalf3x4";

    case MTLDataTypeHalf4x2:
        return "MTLDataTypeHalf4x2";
    case MTLDataTypeHalf4x3:
        return "MTLDataTypeHalf4x3";
    case MTLDataTypeHalf4x4:
        return "MTLDataTypeHalf4x4";

    case MTLDataTypeInt:
        return "MTLDataTypeInt";
    case MTLDataTypeInt2:
        return "MTLDataTypeInt2";
    case MTLDataTypeInt3:
        return "MTLDataTypeInt3";
    case MTLDataTypeInt4:
        return "MTLDataTypeInt4";

    case MTLDataTypeUInt:
        return "MTLDataTypeUInt";
    case MTLDataTypeUInt2:
        return "MTLDataTypeUInt2";
    case MTLDataTypeUInt3:
        return "MTLDataTypeUInt3";
    case MTLDataTypeUInt4:
        return "MTLDataTypeUInt4";

    case MTLDataTypeShort:
        return "MTLDataTypeShort";
    case MTLDataTypeShort2:
        return "MTLDataTypeShort2";
    case MTLDataTypeShort3:
        return "MTLDataTypeShort3";
    case MTLDataTypeShort4:
        return "MTLDataTypeShort4";

    case MTLDataTypeUShort:
        return "MTLDataTypeUShort";
    case MTLDataTypeUShort2:
        return "MTLDataTypeUShort2";
    case MTLDataTypeUShort3:
        return "MTLDataTypeUShort3";
    case MTLDataTypeUShort4:
        return "MTLDataTypeUShort4";

    case MTLDataTypeChar:
        return "MTLDataTypeChar";
    case MTLDataTypeChar2:
        return "MTLDataTypeChar2";
    case MTLDataTypeChar3:
        return "MTLDataTypeChar3";
    case MTLDataTypeChar4:
        return "MTLDataTypeChar4";

    case MTLDataTypeUChar:
        return "MTLDataTypeUChar";
    case MTLDataTypeUChar2:
        return "MTLDataTypeUChar2";
    case MTLDataTypeUChar3:
        return "MTLDataTypeUChar3";
    case MTLDataTypeUChar4:
        return "MTLDataTypeUChar4";

    case MTLDataTypeBool:
        return "MTLDataTypeBool";
    case MTLDataTypeBool2:
        return "MTLDataTypeBool2";
    case MTLDataTypeBool3:
        return "MTLDataTypeBool3";
    case MTLDataTypeBool4:
        return "MTLDataTypeBool4";
    }

    return "Unknown type";
}

METALTYPES_CONSTEXPR MTLDataType metaltypes_typeBase(MTLDataType type) {
    switch (type) {
    case MTLDataTypeNone:
        return MTLDataTypeNone;

    case MTLDataTypeStruct:
        return MTLDataTypeStruct;
    case MTLDataTypeArray:
        return MTLDataTypeArray;

    case MTLDataTypeFloat:
    case MTLDataTypeFloat2:
    case MTLDataTypeFloat3:
    case MTLDataTypeFloat4:
        return MTLDataTypeFloat;

    case MTLDataTypeFloat2x2:
    case MTLDataTypeFloat2x3:
    case MTLDataTypeFloat2x4:

    case MTLDataTypeFloat3x2:
    case MTLDataTypeFloat3x3:
    case MTLDataTypeFloat3x4:

    case MTLDataTypeFloat4x2:
    case MTLDataTypeFloat4x3:
    case MTLDataTypeFloat4x4:
        return MTLDataTypeFloat;

    case MTLDataTypeHalf:
    case MTLDataTypeHalf2:
    case MTLDataTypeHalf3:
    case MTLDataTypeHalf4:
        return MTLDataTypeHalf;

    case MTLDataTypeHalf2x2:
    case MTLDataTypeHalf2x3:
    case MTLDataTypeHalf2x4:

    case MTLDataTypeHalf3x2:
    case MTLDataTypeHalf3x3:
    case MTLDataTypeHalf3x4:

    case MTLDataTypeHalf4x2:
    case MTLDataTypeHalf4x3:
    case MTLDataTypeHalf4x4:
        return MTLDataTypeHalf;

    case MTLDataTypeInt:
    case MTLDataTypeInt2:
    case MTLDataTypeInt3:
    case MTLDataTypeInt4:
        return MTLDataTypeInt;

    case MTLDataTypeUInt:
    case MTLDataTypeUInt2:
    case MTLDataTypeUInt3:
    case MTLDataTypeUInt4:
        return MTLDataTypeUInt;

    case MTLDataTypeShort:
    case MTLDataTypeShort2:
    case MTLDataTypeShort3:
    case MTLDataTypeShort4:
        return MTLDataTypeShort;

    case MTLDataTypeUShort:
    case MTLDataTypeUShort2:
    case MTLDataTypeUShort3:
    case MTLDataTypeUShort4:
        return MTLDataTypeUShort;

    case MTLDataTypeChar:
    case MTLDataTypeChar2:
    case MTLDataTypeChar3:
    case MTLDataTypeChar4:
        return MTLDataTypeChar;

    case MTLDataTypeUChar:
    case MTLDataTypeUChar2:
    case MTLDataTypeUChar3:
    case MTLDataTypeUChar4:
        return MTLDataTypeUChar;

    case MTLDataTypeBool:
    case MTLDataTypeBool2:
    case MTLDataTypeBool3:
    case MTLDataTypeBool4:
        return MTLDataTypeBool;
    }

    return MTLDataTypeNone;
}

METALTYPES_CONSTEXPR int metaltypes_typeElements(MTLDataType type) {
    switch (type) {
    case MTLDataTypeNone:
        return 0;

    case MTLDataTypeStruct:
        return -1;
    case MTLDataTypeArray:
        return -1;

    case MTLDataTypeFloat:
        return 1;
    case MTLDataTypeFloat2:
        return 2;
    case MTLDataTypeFloat3:
        return 3;
    case MTLDataTypeFloat4:
        return 4;

    case MTLDataTypeFloat2x2:
        return 2 * 2;
    case MTLDataTypeFloat2x3:
        return 2 * 3;
    case MTLDataTypeFloat2x4:
        return 2 * 4;

    case MTLDataTypeFloat3x2:
        return 3 * 2;
    case MTLDataTypeFloat3x3:
        return 3 * 3;
    case MTLDataTypeFloat3x4:
        return 3 * 4;

    case MTLDataTypeFloat4x2:
        return 4 * 2;
    case MTLDataTypeFloat4x3:
        return 4 * 3;
    case MTLDataTypeFloat4x4:
        return 4 * 4;

    case MTLDataTypeHalf:
        return 1;
    case MTLDataTypeHalf2:
        return 2;
    case MTLDataTypeHalf3:
        return 3;
    case MTLDataTypeHalf4:
        return 4;

    case MTLDataTypeHalf2x2:
        return 2 * 2;
    case MTLDataTypeHalf2x3:
        return 2 * 3;
    case MTLDataTypeHalf2x4:
        return 2 * 4;

    case MTLDataTypeHalf3x2:
        return 3 * 2;
    case MTLDataTypeHalf3x3:
        return 3 * 3;
    case MTLDataTypeHalf3x4:
        return 3 * 4;

    case MTLDataTypeHalf4x2:
        return 4 * 2;
    case MTLDataTypeHalf4x3:
        return 4 * 3;
    case MTLDataTypeHalf4x4:
        return 4 * 4;

    case MTLDataTypeInt:
        return 1;
    case MTLDataTypeInt2:
        return 2;
    case MTLDataTypeInt3:
        return 3;
    case MTLDataTypeInt4:
        return 4;

    case MTLDataTypeUInt:
        return 1;
    case MTLDataTypeUInt2:
        return 2;
    case MTLDataTypeUInt3:
        return 3;
    case MTLDataTypeUInt4:
        return 4;

    case MTLDataTypeShort:
        return 1;
    case MTLDataTypeShort2:
        return 2;
    case MTLDataTypeShort3:
        return 3;
    case MTLDataTypeShort4:
        return 4;

    case MTLDataTypeUShort:
        return 1;
    case MTLDataTypeUShort2:
        return 2;
    case MTLDataTypeUShort3:
        return 3;
    case MTLDataTypeUShort4:
        return 4;

    case MTLDataTypeChar:
        return 1;
    case MTLDataTypeChar2:
        return 2;
    case MTLDataTypeChar3:
        return 3;
    case MTLDataTypeChar4:
        return 4;

    case MTLDataTypeUChar:
        return 1;
    case MTLDataTypeUChar2:
        return 2;
    case MTLDataTypeUChar3:
        return 3;
    case MTLDataTypeUChar4:
        return 4;

    case MTLDataTypeBool:
        return 1;
    case MTLDataTypeBool2:
        return 2;
    case MTLDataTypeBool3:
        return 3;
    case MTLDataTypeBool4:
        return 4;
    }

    return 0;
}

METALTYPES_CONSTEXPR int metaltypes_sizeofBase(MTLDataType type) {
    switch (type) {
    case MTLDataTypeNone:
        return 0;
    //        case MTLDataTypeStruct: return 0; // ?
    //        case MTLDataTypeArray: return 0; // ?
    case MTLDataTypeFloat:
        return 4;
    case MTLDataTypeHalf:
        return 2;
    case MTLDataTypeInt:
        return 4;
    case MTLDataTypeUInt:
        return 4;
    case MTLDataTypeShort:
        return 2;
    case MTLDataTypeUShort:
        return 2;
    case MTLDataTypeChar:
        return 1;
    case MTLDataTypeUChar:
        return 1;
    case MTLDataTypeBool:
        return 1; //?
    default:
        return 0;
    }
    return 0;
}

METALTYPES_CONSTEXPR int metaltypes_sizeof(MTLDataType type) {
    return metaltypes_sizeofBase(metaltypes_typeBase(type)) *
           metaltypes_typeElements(type);
}

METALTYPES_CONSTEXPR GPUType metaltypes_gputype(MTLDataType type) {
    switch (type) {
    case MTLDataTypeNone:
        return GPUTYPE_NONE;

    case MTLDataTypeStruct:
        return GPUTYPE_NONE;
    case MTLDataTypeArray:
        return GPUTYPE_NONE;

    case MTLDataTypeFloat:
        return GPUTYPE_FLOAT;
    case MTLDataTypeFloat2:
        return GPUTYPE_FLOAT_VEC2;
    case MTLDataTypeFloat3:
        return GPUTYPE_FLOAT_VEC3;
    case MTLDataTypeFloat4:
        return GPUTYPE_FLOAT_VEC4;

    case MTLDataTypeFloat2x2:
        return GPUTYPE_FLOAT_MAT2;
    case MTLDataTypeFloat2x3:
        return GPUTYPE_FLOAT_MAT2x3;
    case MTLDataTypeFloat2x4:
        return GPUTYPE_FLOAT_MAT2x4;

    case MTLDataTypeFloat3x2:
        return GPUTYPE_FLOAT_MAT3x2;
    case MTLDataTypeFloat3x3:
        return GPUTYPE_FLOAT_MAT3;
    case MTLDataTypeFloat3x4:
        return GPUTYPE_FLOAT_MAT3x4;

    case MTLDataTypeFloat4x2:
        return GPUTYPE_FLOAT_MAT4x2;
    case MTLDataTypeFloat4x3:
        return GPUTYPE_FLOAT_MAT4x3;
    case MTLDataTypeFloat4x4:
        return GPUTYPE_FLOAT_MAT4;

    case MTLDataTypeHalf:
        return GPUTYPE_HALF;
    case MTLDataTypeHalf2:
        return GPUTYPE_HALF_VEC2;
    case MTLDataTypeHalf3:
        return GPUTYPE_HALF_VEC3;
    case MTLDataTypeHalf4:
        return GPUTYPE_HALF_VEC4;

    case MTLDataTypeHalf2x2:
        return GPUTYPE_HALF_MAT2;
    case MTLDataTypeHalf2x3:
        return GPUTYPE_HALF_MAT2x3;
    case MTLDataTypeHalf2x4:
        return GPUTYPE_HALF_MAT2x4;

    case MTLDataTypeHalf3x2:
        return GPUTYPE_HALF_MAT3x2;
    case MTLDataTypeHalf3x3:
        return GPUTYPE_HALF_MAT3;
    case MTLDataTypeHalf3x4:
        return GPUTYPE_HALF_MAT3x4;

    case MTLDataTypeHalf4x2:
        return GPUTYPE_HALF_MAT4x2;
    case MTLDataTypeHalf4x3:
        return GPUTYPE_HALF_MAT4x3;
    case MTLDataTypeHalf4x4:
        return GPUTYPE_HALF_MAT4;

    case MTLDataTypeInt:
        return GPUTYPE_INT;
    case MTLDataTypeInt2:
        return GPUTYPE_INT_VEC2;
    case MTLDataTypeInt3:
        return GPUTYPE_INT_VEC3;
    case MTLDataTypeInt4:
        return GPUTYPE_INT_VEC4;

    case MTLDataTypeUInt:
        return GPUTYPE_UNSIGNED_INT;
    case MTLDataTypeUInt2:
        return GPUTYPE_UNSIGNED_INT_VEC2;
    case MTLDataTypeUInt3:
        return GPUTYPE_UNSIGNED_INT_VEC3;
    case MTLDataTypeUInt4:
        return GPUTYPE_UNSIGNED_INT_VEC4;

    case MTLDataTypeShort:
        return GPUTYPE_SHORT;
    case MTLDataTypeShort2:
        return GPUTYPE_SHORT_VEC2;
    case MTLDataTypeShort3:
        return GPUTYPE_SHORT_VEC3;
    case MTLDataTypeShort4:
        return GPUTYPE_SHORT_VEC4;

    case MTLDataTypeUShort:
        return GPUTYPE_UNSIGNED_SHORT;
    case MTLDataTypeUShort2:
        return GPUTYPE_UNSIGNED_SHORT_VEC2;
    case MTLDataTypeUShort3:
        return GPUTYPE_UNSIGNED_SHORT_VEC3;
    case MTLDataTypeUShort4:
        return GPUTYPE_UNSIGNED_SHORT_VEC4;

    case MTLDataTypeChar:
        return GPUTYPE_BYTE;
    case MTLDataTypeChar2:
        return GPUTYPE_BYTE_VEC2;
    case MTLDataTypeChar3:
        return GPUTYPE_BYTE_VEC3;
    case MTLDataTypeChar4:
        return GPUTYPE_BYTE_VEC4;

    case MTLDataTypeUChar:
        return GPUTYPE_UNSIGNED_BYTE;
    case MTLDataTypeUChar2:
        return GPUTYPE_UNSIGNED_BYTE_VEC2;
    case MTLDataTypeUChar3:
        return GPUTYPE_UNSIGNED_BYTE_VEC3;
    case MTLDataTypeUChar4:
        return GPUTYPE_UNSIGNED_BYTE_VEC4;

    case MTLDataTypeBool:
        return GPUTYPE_BOOL;
    case MTLDataTypeBool2:
        return GPUTYPE_BOOL_VEC2;
    case MTLDataTypeBool3:
        return GPUTYPE_BOOL_VEC3;
    case MTLDataTypeBool4:
        return GPUTYPE_BOOL_VEC4;
    }
}

#endif
