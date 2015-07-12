//#include <OpenGLES/ES3/gl.h>
#ifdef __APPLE__
#include <OpenGL/gl3.h>
#else
#include <GL/gl3.h>
#endif

#include "gputypes/gltypes.h"
#include <stdio.h>

GLenum ranges[][2] = {{GL_BYTE, GL_FLOAT},
#ifdef GL_DOUBLE
                      {GL_DOUBLE, GL_DOUBLE},
#endif
                      {GL_FLOAT_VEC2, GL_FLOAT_MAT4},
#ifdef GL_FLOAT_MAT2x3
                      {GL_FLOAT_MAT2x3, GL_FLOAT_MAT4x3},
#endif
#ifdef GL_UNSIGNED_INT_VEC2
                      {GL_UNSIGNED_INT_VEC2, GL_UNSIGNED_INT_VEC4},
#endif
#ifdef GL_DOUBLE_VEC2
                      {GL_DOUBLE_VEC2, GL_DOUBLE_VEC2},
                      {GL_DOUBLE_MAT2, GL_DOUBLE_MAT4x3},
#endif
#ifdef GL_HALF_FLOAT
                      {GL_HALF_FLOAT, GL_HALF_FLOAT}
#endif
};

int main() {

    size_t num_ranges = sizeof(ranges) / sizeof(ranges[0]);

    for (size_t i = 0; i < num_ranges; ++i) {
        for (size_t j = ranges[i][0]; j <= ranges[i][1]; ++j) {
            const char *name = gltypes_typeName(j);
            int basetype = gltypes_typeBase(j);
            const char *basename = gltypes_typeName(basetype);
            int vecsize = gltypes_typeElements(j);
            int size = gltypes_sizeof(j);

            GPUType gputype = gltypes_gputype(j);
            const char *gpuname = gputype_typeName(gputype);

            printf(
            "(0x%04zx) %s vecsize %d basetype %s bytes %d, gputype %s (0x%x)\n",
            j, name, vecsize, basename, size, gpuname, gputype);
        }
    }

    return 0;
}
