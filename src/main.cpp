#include "imageio.h"
#include <assert.h>

int main(int argc, char** argv) {
    char *usage = "usage: hdrconv <input file> <output file>\n";
    assert(argc > 2);
    if (argc <= 2) {
        printf(usage);
        return 0;
    }
    
    int width = 0;
    int height = 0;
    Color* pixels = ReadImage(argv[1], &width, &height);
    assert(pixels != 0);
    if (pixels) {
        WriteImage(argv[2], &pixels[0].r, 0, width, height, width, height, 0, 0);
    }
    return 0;
}
