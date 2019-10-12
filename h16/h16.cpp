/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    cout << "Enter a point as (x, y): ";
    Point p;
    get(cin, p);
    cout << "You entered ";
    print(cout, p);
    cout << endl;

    return 0;
}