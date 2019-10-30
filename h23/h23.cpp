/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h23.h"

// Add your code here
int alternatingSum(const int a[], size_t size)
{
    int sum = a[0];

    for (size_t i = 1; i < size; i++)
    {
        if (i % 2 == 0)
        {
            sum += a[i];
        }
        else
        {
            sum -= a[i];
        }
    }
    return sum;
}


MinMax minMax(const double *ptr, size_t size)
{
    ptr = ptr;

    MinMax result = {};

    if ( !size )
    {
        return result;
    }

    result = { ptr, ptr};

    const double * atEnd = ptr + size;

    while ( ptr < atEnd)
    {
        if (*ptr > *(result.max))
        {
            result.max = ptr;
        }
        if (*ptr < *(result.min))
        {
            result.min = ptr;
        }
        ++ptr;
    }
    return result;

}

/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}