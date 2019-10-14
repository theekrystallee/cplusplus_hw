/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h05.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

#include "h05.h"

double focalLength(double d, double r1, double r2, double n)
{
    double f;

    f = 1 / ((n - 1) * ((1 / r1) - (1 / r2) + (((n - 1) * d) / (n * r1 * r2))));

    return f;
}



/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
