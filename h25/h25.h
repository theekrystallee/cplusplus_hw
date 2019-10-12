/**
    @file h25.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/

#ifndef H25_H_
#define H25_H_

/**
 * sameSet: checks if a and b have the same set of ints.
 *  - ignores multiplicity and order.
 *
 * @param a array of const int.
 * @param aEnd a pointer to past-the-end of a.
 * @param b array of const int.
 * @param bEnd pointer to past-the-end of b.
 *
 * @pre #aEnd and #bEnd are > a and b
 *
 * @return true if a and b have the "same set" as described above.
 * @examples:
 *      1  4  9  16  9  7  4  9  11 and 11  11  7  9  16  4  1 are same set
 *      3 1 1 11 and 3 11 11 7 are not the same set because b contains a 7
 *
 */
bool sameSet(const int *aBeg, const int *aEnd,
             const int *bBeg, const int *bEnd);

/**
 * Copies all even numbers from a to b.
 *
 * @param a array of const int.
 * @param aSize size of array a.
 * @param[out] b array of int to be filled in with even numbers.
 * @param[int, out] bSize declared size of b on entry; returns number of elements copied.
 *
 * @pre bSize >= aSize
 * @post b filled with even numbers from a.
 *      bSize set to number of even values copied.
 *
 * @throw illegal_length exception if size of b < size of a
 *
 */
void copyEvens(const int a[], size_t aSize, int b[], size_t& bSize);

#endif
