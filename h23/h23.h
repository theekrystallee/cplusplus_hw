/**
    @file h23.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H23_H_
#define H23_H_

/**
 *  Calculates an alternating sum of the elements in a.
 *  @param a an array of const int.
 *  @param size the number of elements in the array.
 *  @pre #size is > 0
 *  @return the alternating sum of {a, b, c, d} -> a - b + c - d
 *  Don't worry about overflow of the result.
 */
int alternatingSum(const int a[], size_t size);

struct MinMax
{
    const double * min = nullptr;
    const double * max = nullptr;
};
/**
 * Returns pointers to the extreme values in the array.
 * @param a pointer the first element in an array of doubles
 * @param size the number of elements in the array.
 * @return a MinMax structure; nullptrs if size is 0.
 */
MinMax minMax(const double *ptr, size_t size);

#endif
