/**
    @file h22.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H22_H_
#define H22_H_

using UC = unsigned char;
struct Pixel {UC red{0}, green{0}, blue{0}, alpha{255};};
enum class Direction {LtoR, RtoL, TtoB, BtoT};


/**
 * Flips the image.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * @param the direction to flip the image.
 * Assume 4 bytes per pixel
 */
void flip(UC* const img, int width, int height, Direction dir);

/**
 * Mirror's the image.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * @param the direction to mirror the image.
 * Assume 4 bytes per pixel
 */
void mirror(UC* const img, int width, int height, Direction dir);

// Functions from stb_image and stb_image_write
// These are C functions
extern "C" {
unsigned char* stbi_load(const char* fileName,
    int* width, int* height, int* bitsPerChannel,
    int desiredBpp=4);

 int stbi_write_png(const char* fName, int width, int height,
    int comp, const void *data, int stride);
 int stbi_write_bmp(const char* fName, int width, int height,
    int comp, const void *data);
 int stbi_write_jpg(const char* fName, int width, int height,
    int comp, const void *data, int quality);

 void stbi_image_free (void *);
};

#endif
