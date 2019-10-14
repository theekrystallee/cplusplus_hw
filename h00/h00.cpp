/**
 *  @author Krystal Lee
 *  @date August 25th, 2019 Fall 2019 (20595 MW)
 *  @file h00.cpp
 */
#include <iostream>
#include <string>
using namespace std;

string STUDENT = "klee159";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * A cereal weight conversion program from ounces to metric tons.
 * @return 0 for success.
 */
int run()
{
    // Add your implementation comments here
    // Input: weight of the cereal in onces.
    // Output: weight of box in metric tons, boxes per ton.
    // Given: metric ton is 35,273.92 ounces.
    // Calculation: weight in tons -> weight divided by metric tons per ounce.
    // Calculation: boxes -> 1 divided by weight in tons.

    // Write your code here.
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Cereal Box Calculator" << endl;
    cout << string(50, '-') << endl;

    // Input
    cout << "Enter ounces per box of cereal: " << endl;
    double ouncesPerBox;
    cin >> ouncesPerBox;

    // Processing
    const double OUNCES_PER_TON = 35273.92;
    double weightInTons = ouncesPerBox / OUNCES_PER_TON;
    double boxesPerTon = 1.0 / weightInTons;

    // Output
    cout << "Weight in metric tons, boxes per ton: [" << weightInTons << ", " << boxesPerTon << "]" << endl;

    return 0;
}

