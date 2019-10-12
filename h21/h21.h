/**
    @file h21.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H21_H_
#define H21_H_

/**
 * Sets all green pixels to transparent.
 * A pixel is green if the green component is at least twice as large
 * as the maximum of its red and blue components.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 * Assume that there are 4 bytes per pixel (RGBA)
 */
void greenScreen(unsigned char * const img, int width, int height);

/**
 * Combines a background and foreground. The foreground
 * is "green-screened". The pixels are combined with
 * opaque pixels from foreground and backround showing
 * through the transparent ones.
 * @param data a constant pointer to the image data.
 * @param width the width of the image in pixels
 * @param height the height of the image in pixels
 *  - Assume that there are 4 bytes per pixel (RGBA)
 *  - Asume both images are the same size.
 */
void composite( unsigned char * const bg,
                unsigned char * const fg,
                int width, int height);

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
