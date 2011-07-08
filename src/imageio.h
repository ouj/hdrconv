#ifndef _IMAGEIO_H_
#define _IMAGEIO_H_

// core/imageio.h*
#include <string>
using namespace std;

struct Color {
    Color() {}
    Color(float rr, float gg, float bb) : r(rr), g(gg), b(bb) {}
    Color(float* f) : r(f[0]), g(f[1]), b(f[2]) {}
    float r;
    float g;
    float b;
};

// ImageIO Declarations
Color *ReadImage(const string &name, int *xSize, int *ySize);
void WriteImage(const string &name, float *pixels, float *alpha,
    int XRes, int YRes, int totalXRes, int totalYRes, int xOffset,
    int yOffset);

#endif // _IMAGEIO_H_
