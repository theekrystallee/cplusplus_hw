/**
    @file h20.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H20_H_
#define H20_H_

/**
 * Reverses (inverts) every pixel in img, except any alpha pixels.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * Assume 4 bits per pixel
 */
void negative(unsigned char * const img, int width, int height);

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
