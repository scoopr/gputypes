#ifndef GLTYPES_H
#define GLTYPES_H

#ifdef GLTYPES_OPENGL_INCLUDE
#include GLTYPES_OPENGL_INCLUDE
#endif

#ifndef __has_feature
#define __has_feature(x) 0
#endif

#if defined(__cplusplus) && __has_feature(cxx_relaxed_constexpr)
#define GLTYPES_CONSTEXPR constexpr
#else
#define GLTYPES_CONSTEXPR static inline
#endif

#include "gputypes.h"

GLTYPES_CONSTEXPR const char *gltypes_typeName(GLenum type) {
    switch (type) {

    case GL_FLOAT:
        return "GL_FLOAT";

    case GL_FLOAT_VEC2:
        return "GL_FLOAT_VEC2";

    case GL_FLOAT_VEC3:
        return "GL_FLOAT_VEC3";

    case GL_FLOAT_VEC4:
        return "GL_FLOAT_VEC4";

    case GL_FLOAT_MAT2:
        return "GL_FLOAT_MAT2";

    case GL_FLOAT_MAT3:
        return "GL_FLOAT_MAT3";

    case GL_FLOAT_MAT4:
        return "GL_FLOAT_MAT4";

#ifdef GL_FLOAT_MAT2x3
    case GL_FLOAT_MAT2x3:
        return "GL_FLOAT_MAT2x3";

    case GL_FLOAT_MAT2x4:
        return "GL_FLOAT_MAT2x4";

    case GL_FLOAT_MAT3x2:
        return "GL_FLOAT_MAT3x2";

    case GL_FLOAT_MAT3x4:
        return "GL_FLOAT_MAT3x4";

    case GL_FLOAT_MAT4x2:
        return "GL_FLOAT_MAT4x2";

    case GL_FLOAT_MAT4x3:
        return "GL_FLOAT_MAT4x3";
#endif

    case GL_INT:
        return "GL_INT";
    case GL_INT_VEC2:
        return "GL_INT_VEC2";

    case GL_INT_VEC3:
        return "GL_INT_VEC3";

    case GL_INT_VEC4:
        return "GL_INT_VEC4";

    case GL_UNSIGNED_INT:
        return "GL_UNSIGNED_INT";
#if defined(GL_VERSION_3_0) || defined(GL_ES_VERSION_3_0)
    case GL_UNSIGNED_INT_VEC2:
        return "GL_UNSIGNED_INT_VEC2";

    case GL_UNSIGNED_INT_VEC3:
        return "GL_UNSIGNED_INT_VEC3";

    case GL_UNSIGNED_INT_VEC4:
        return "GL_UNSIGNED_INT_VEC4";
#endif
    case GL_SHORT:
        return "GL_SHORT";

    case GL_UNSIGNED_SHORT:
        return "GL_UNSIGNED_SHORT";

    case GL_BYTE:
        return "GL_BYTE";

#ifdef GL_DOUBLE
    case GL_DOUBLE:
        return "GL_DOUBLE";
#endif

    case GL_BOOL:
        return "GL_BOOL";
    case GL_BOOL_VEC2:
        return "GL_BOOL_VEC2";
    case GL_BOOL_VEC3:
        return "GL_BOOL_VEC3";
    case GL_BOOL_VEC4:
        return "GL_BOOL_VEC4";

#ifdef GL_DOUBLE_VEC2
    case GL_DOUBLE_VEC2:
        return "GL_DOUBLE_VEC2";

    case GL_DOUBLE_VEC3:
        return "GL_DOUBLE_VEC3";

    case GL_DOUBLE_VEC4:
        return "GL_DOUBLE_VEC4";

    case GL_DOUBLE_MAT2:
        return "GL_DOUBLE_MAT2";

    case GL_DOUBLE_MAT3:
        return "GL_DOUBLE_MAT3";

    case GL_DOUBLE_MAT4:
        return "GL_DOUBLE_MAT4";

    case GL_DOUBLE_MAT2x3:
        return "GL_DOUBLE_MAT2x3";

    case GL_DOUBLE_MAT2x4:
        return "GL_DOUBLE_MAT2x4";

    case GL_DOUBLE_MAT3x2:
        return "GL_DOUBLE_MAT3x2";

    case GL_DOUBLE_MAT3x4:
        return "GL_DOUBLE_MAT3x4";

    case GL_DOUBLE_MAT4x2:
        return "GL_DOUBLE_MAT4x2";

    case GL_DOUBLE_MAT4x3:
        return "GL_DOUBLE_MAT4x3";
#endif

#ifdef GL_HALF_FLOAT
    case GL_HALF_FLOAT:
        return "GL_HALF_FLOAT";
#endif

    case GL_UNSIGNED_BYTE:
        return "GL_UNSIGNED_BYTE";
    }
    return "no-such-type";
}

GLTYPES_CONSTEXPR GLenum gltypes_typeBase(GLenum type) {
    switch (type) {
    case GL_FLOAT:
        return GL_FLOAT;
    case GL_FLOAT_VEC2:
        return GL_FLOAT;

    case GL_FLOAT_VEC3:
        return GL_FLOAT;

    case GL_FLOAT_VEC4:
        return GL_FLOAT;

    case GL_FLOAT_MAT2:
        return GL_FLOAT;

    case GL_FLOAT_MAT3:
        return GL_FLOAT;

    case GL_FLOAT_MAT4:
        return GL_FLOAT;

#ifdef GL_FLOAT_MAT2x3
    case GL_FLOAT_MAT2x3:
        return GL_FLOAT;

    case GL_FLOAT_MAT2x4:
        return GL_FLOAT;

    case GL_FLOAT_MAT3x2:
        return GL_FLOAT;

    case GL_FLOAT_MAT3x4:
        return GL_FLOAT;

    case GL_FLOAT_MAT4x2:
        return GL_FLOAT;

    case GL_FLOAT_MAT4x3:
        return GL_FLOAT;
#endif
    case GL_INT:
        return GL_INT;
    case GL_INT_VEC2:
        return GL_INT;

    case GL_INT_VEC3:
        return GL_INT;

    case GL_INT_VEC4:
        return GL_INT;

    case GL_UNSIGNED_INT:
        return GL_UNSIGNED_INT;

#if defined(GL_VERSION_3_0) || defined(GL_ES_VERSION_3_0)
    case GL_UNSIGNED_INT_VEC2:
        return GL_UNSIGNED_INT;

    case GL_UNSIGNED_INT_VEC3:
        return GL_UNSIGNED_INT;

    case GL_UNSIGNED_INT_VEC4:
        return GL_UNSIGNED_INT;
#endif

    case GL_SHORT:
        return GL_SHORT;

    case GL_UNSIGNED_SHORT:
        return GL_UNSIGNED_SHORT;

    case GL_BYTE:
        return GL_BYTE;

    case GL_UNSIGNED_BYTE:
        return GL_UNSIGNED_BYTE;

#ifdef GL_DOUBLE
    case GL_DOUBLE:
        return GL_DOUBLE;
#endif

    case GL_BOOL:
        return GL_BOOL;
    case GL_BOOL_VEC2:
        return GL_BOOL;
    case GL_BOOL_VEC3:
        return GL_BOOL;
    case GL_BOOL_VEC4:
        return GL_BOOL;

#ifdef GL_DOUBLE_VEC2
    case GL_DOUBLE_VEC2:
        return GL_DOUBLE;

    case GL_DOUBLE_VEC3:
        return GL_DOUBLE;

    case GL_DOUBLE_VEC4:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT2:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT3:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT4:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT2x3:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT2x4:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT3x2:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT3x4:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT4x2:
        return GL_DOUBLE;

    case GL_DOUBLE_MAT4x3:
        return GL_DOUBLE;
#endif

#ifdef GL_HALF_FLOAT
    case GL_HALF_FLOAT:
        return GL_HALF_FLOAT;
#endif
    }

    return GL_FALSE;
}

GLTYPES_CONSTEXPR int gltypes_typeElements(GLenum type) {
    switch (type) {
    case GL_FLOAT:
        return 1;
    case GL_FLOAT_VEC2:
        return 2;

    case GL_FLOAT_VEC3:
        return 3;

    case GL_FLOAT_VEC4:
        return 4;

    case GL_FLOAT_MAT2:
        return 2 * 2;

    case GL_FLOAT_MAT3:
        return 3 * 3;

    case GL_FLOAT_MAT4:
        return 4 * 4;

#ifdef GL_FLOAT_MAT2x3
    case GL_FLOAT_MAT2x3:
        return 2 * 3;

    case GL_FLOAT_MAT2x4:
        return 2 * 4;

    case GL_FLOAT_MAT3x2:
        return 3 * 2;

    case GL_FLOAT_MAT3x4:
        return 3 * 4;

    case GL_FLOAT_MAT4x2:
        return 4 * 2;

    case GL_FLOAT_MAT4x3:
        return 4 * 3;
#endif

    case GL_INT:
        return 1;
    case GL_INT_VEC2:
        return 2;

    case GL_INT_VEC3:
        return 3;

    case GL_INT_VEC4:
        return 4;

    case GL_UNSIGNED_INT:
        return 1;

#if defined(GL_VERSION_3_0) || defined(GL_ES_VERSION_3_0)
    case GL_UNSIGNED_INT_VEC2:
        return 2;

    case GL_UNSIGNED_INT_VEC3:
        return 3;

    case GL_UNSIGNED_INT_VEC4:
        return 4;
#endif
    case GL_SHORT:
        return 1;

    case GL_UNSIGNED_SHORT:
        return 1;

    case GL_BYTE:
        return 1;

    case GL_UNSIGNED_BYTE:
        return 1;

#ifdef GL_DOUBLE
    case GL_DOUBLE:
        return 1;
#endif

    case GL_BOOL:
        return 1;
    case GL_BOOL_VEC2:
        return 2;
    case GL_BOOL_VEC3:
        return 3;
    case GL_BOOL_VEC4:
        return 4;
#ifdef GL_DOUBLE_VEC2
    case GL_DOUBLE_VEC2:
        return 2;

    case GL_DOUBLE_VEC3:
        return 3;

    case GL_DOUBLE_VEC4:
        return 4;

    case GL_DOUBLE_MAT2:
        return 2 * 2;

    case GL_DOUBLE_MAT3:
        return 3 * 3;

    case GL_DOUBLE_MAT4:
        return 4 * 4;

    case GL_DOUBLE_MAT2x3:
        return 2 * 3;

    case GL_DOUBLE_MAT2x4:
        return 2 * 4;

    case GL_DOUBLE_MAT3x2:
        return 3 * 2;

    case GL_DOUBLE_MAT3x4:
        return 3 * 4;

    case GL_DOUBLE_MAT4x2:
        return 4 * 2;

    case GL_DOUBLE_MAT4x3:
        return 4 * 3;
#endif
#ifdef GL_HALF_FLOAT
    case GL_HALF_FLOAT:
        return 1;
#endif
    }

    return GL_FALSE;
}

GLTYPES_CONSTEXPR int gltypes_sizeofBase(GLenum type) {
    switch (type) {

    case GL_FLOAT:
        return sizeof(GLfloat);
    case GL_INT:
        return sizeof(GLint);

    case GL_UNSIGNED_INT:
        return sizeof(GLuint);

    case GL_SHORT:
        return sizeof(GLshort);

    case GL_UNSIGNED_SHORT:
        return sizeof(GLushort);

    case GL_BYTE:
        return sizeof(GLbyte);

    case GL_UNSIGNED_BYTE:
        return sizeof(GLubyte);

#ifdef GL_DOUBLE
    case GL_DOUBLE:
        return sizeof(GLdouble);
#endif

#ifdef GL_HALF_FLOAT
    case GL_HALF_FLOAT:
        return sizeof(GLhalf);
#endif

    case GL_BOOL:
        return sizeof(GLboolean);
    }
    return GL_FALSE;
}

GLTYPES_CONSTEXPR int gltypes_sizeof(GLenum type) {
    return gltypes_sizeofBase(gltypes_typeBase(type)) *
           gltypes_typeElements(type);
}

GLTYPES_CONSTEXPR GPUType gltypes_gputype(GLenum type) {
    switch (type) {

    case GL_FLOAT:
        return GPUTYPE_FLOAT;

    case GL_FLOAT_VEC2:
        return GPUTYPE_FLOAT_VEC2;

    case GL_FLOAT_VEC3:
        return GPUTYPE_FLOAT_VEC3;

    case GL_FLOAT_VEC4:
        return GPUTYPE_FLOAT_VEC4;

    case GL_FLOAT_MAT2:
        return GPUTYPE_FLOAT_MAT2;

    case GL_FLOAT_MAT3:
        return GPUTYPE_FLOAT_MAT3;

    case GL_FLOAT_MAT4:
        return GPUTYPE_FLOAT_MAT4;

#ifdef GL_FLOAT_MAT2x3
    case GL_FLOAT_MAT2x3:
        return GPUTYPE_FLOAT_MAT2x3;

    case GL_FLOAT_MAT2x4:
        return GPUTYPE_FLOAT_MAT2x4;

    case GL_FLOAT_MAT3x2:
        return GPUTYPE_FLOAT_MAT3x2;

    case GL_FLOAT_MAT3x4:
        return GPUTYPE_FLOAT_MAT3x4;

    case GL_FLOAT_MAT4x2:
        return GPUTYPE_FLOAT_MAT4x2;

    case GL_FLOAT_MAT4x3:
        return GPUTYPE_FLOAT_MAT4x3;
#endif

    case GL_INT:
        return GPUTYPE_INT;
    case GL_INT_VEC2:
        return GPUTYPE_INT_VEC2;

    case GL_INT_VEC3:
        return GPUTYPE_INT_VEC3;

    case GL_INT_VEC4:
        return GPUTYPE_INT_VEC4;

    case GL_UNSIGNED_INT:
        return GPUTYPE_UNSIGNED_INT;
#if defined(GL_VERSION_3_0) || defined(GL_ES_VERSION_3_0)
    case GL_UNSIGNED_INT_VEC2:
        return GPUTYPE_UNSIGNED_INT_VEC2;

    case GL_UNSIGNED_INT_VEC3:
        return GPUTYPE_UNSIGNED_INT_VEC3;

    case GL_UNSIGNED_INT_VEC4:
        return GPUTYPE_UNSIGNED_INT_VEC4;
#endif
    case GL_SHORT:
        return GPUTYPE_SHORT;

    case GL_UNSIGNED_SHORT:
        return GPUTYPE_UNSIGNED_SHORT;

    case GL_BYTE:
        return GPUTYPE_BYTE;

#ifdef GL_DOUBLE
    case GL_DOUBLE:
        return GPUTYPE_DOUBLE;
#endif

    case GL_BOOL:
        return GPUTYPE_BOOL;
    case GL_BOOL_VEC2:
        return GPUTYPE_BOOL_VEC2;
    case GL_BOOL_VEC3:
        return GPUTYPE_BOOL_VEC3;
    case GL_BOOL_VEC4:
        return GPUTYPE_BOOL_VEC4;

#ifdef GL_DOUBLE_VEC2
    case GL_DOUBLE_VEC2:
        return GPUTYPE_DOUBLE_VEC2;

    case GL_DOUBLE_VEC3:
        return GPUTYPE_DOUBLE_VEC3;

    case GL_DOUBLE_VEC4:
        return GPUTYPE_DOUBLE_VEC4;

    case GL_DOUBLE_MAT2:
        return GPUTYPE_DOUBLE_MAT2;

    case GL_DOUBLE_MAT3:
        return GPUTYPE_DOUBLE_MAT3;

    case GL_DOUBLE_MAT4:
        return GPUTYPE_DOUBLE_MAT4;

    case GL_DOUBLE_MAT2x3:
        return GPUTYPE_DOUBLE_MAT2x3;

    case GL_DOUBLE_MAT2x4:
        return GPUTYPE_DOUBLE_MAT2x4;

    case GL_DOUBLE_MAT3x2:
        return GPUTYPE_DOUBLE_MAT3x2;

    case GL_DOUBLE_MAT3x4:
        return GPUTYPE_DOUBLE_MAT3x4;

    case GL_DOUBLE_MAT4x2:
        return GPUTYPE_DOUBLE_MAT4x2;

    case GL_DOUBLE_MAT4x3:
        return GPUTYPE_DOUBLE_MAT4x3;
#endif

#ifdef GL_HALF_FLOAT
    case GL_HALF_FLOAT:
        return GPUTYPE_HALF;
#endif

    case GL_UNSIGNED_BYTE:
        return GPUTYPE_UNSIGNED_BYTE;
    }
    return GPUTYPE_NONE;
}

#endif
