/**
    @file h24.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H24_H_
#define H24_H_

using UC = unsigned char;
struct Pixel {UC red{0}, green{0}, blue{0}, alpha{255};};

/**
 * Rotates an image in both the dx and dy directions.
 * Pixels wrap around as required.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * @param dx the amount to shift in the x dimension.
 * @param dy the amount to shift in the y dimension
 * Assume 4 bits per pixel
 */
void translate(UC* const img, int width, int height, int dx, int dy);

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
