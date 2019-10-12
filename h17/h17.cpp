/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h17.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h17.h"

// Write your functions here



/////////////// STUDENT TESTING ////////////////////
#include <iostream>
int run()
{
    cout << "Student testing" << endl;
    cout << "toString(Rank)->" << toString(Rank::QUEEN) << endl;
    cout << "toString(Suit)->" << toString(Suit::HEARTS) << endl;
    Card c{Rank::ACE, Suit::SPADES};
    cout << "operator<< for Card->" << c << endl;

    return 0;
}
