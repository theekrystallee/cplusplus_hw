/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW/AM
 *  @file h02.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "klee159";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * A program that calculates how much diet soda can be consumed before it becoming a lethal dose.
 * @return 0 for success.
 */
int run()
{
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "A Lethal Dose" << endl;
    cout << string(50, '-') << endl;

    // Input
    double mouseWeight;
    cout << "Weight of the mouse in grams: ";
    cin >> mouseWeight;

    double lethal;
    cout << "Lethal dose for the mouse (in grams): ";
    cin >> lethal;

    double desiredWeight;
    cout << "Desired weight of the dieter (in pounds): ";
    cin >> desiredWeight;

    // Processing
    const double SODA_GRAMS = 350.0;
    const double POUND = 454.0;
    const double PERCENT_SWEETENER = 0.001;

    double numLethalDose = desiredWeight * POUND * (lethal / mouseWeight);
    double numLethalCans = numLethalDose / (PERCENT_SWEETENER * SODA_GRAMS);

    // Output
    cout << fixed << setprecision(0);
    cout << "Lethal dose in grams, cans is "
    << "[" <<  numLethalDose << ", " << numLethalCans
    << "]" << endl;

    return 0;
}
