/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here



/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    do
    {
        string s = getLine("Enter a string: ");
        cout << "s->\"" << s << "\"" << endl;

        int n = getInt("Enter an integer:");
        cout << "n->" << n << endl;

        double d = getReal("Enter a real number: ");
        cout << "d->" << d << endl;

    } while (getYN("Try again? (Y/N)"));

    return 0;
}