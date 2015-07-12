
#import <Metal/Metal.h>
//#import "../metaldatatypes.h"

#include "gputypes/metaltypes.h"

#include <stdio.h>

MTLDataType ranges[][2] = {{MTLDataTypeNone, MTLDataTypeBool4}};


int main() {

    size_t num_ranges = sizeof(ranges) / sizeof(ranges[0]);

    for (size_t i = 0; i < num_ranges; ++i) {
        for (size_t j = ranges[i][0]; j <= ranges[i][1]; ++j) {
            const char *name = metaltypes_typeName((MTLDataType)j);
            int basetype = metaltypes_typeBase((MTLDataType)j);
            const char *basename = metaltypes_typeName((MTLDataType)basetype);
            int vecsize = metaltypes_typeElements((MTLDataType)j);
            int size = metaltypes_sizeof((MTLDataType)j);
            GPUType gputype = metaltypes_gputype((MTLDataType)j);
            const char *gpuname = gputype_typeName(gputype);
            printf(
            "(0x%04zx) %s vecsize %d basetype %s bytes %d gputype %s (%x)\n", j,
            name, vecsize, basename, size, gpuname, gputype);
        }
    }

    return 0;
}
