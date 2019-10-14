/**
 *  @author Krystal Lee
 *  @date Fall 2019
 *  @file h17.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "klee159";

#include "h17.h"

std::string toString(Suit s)
{
    switch (s)
    {
        case Suit::DIAMONDS: return "Diamonds";
            //break;
        case Suit::SPADES: return "Spades";
            //break;
        case Suit::HEARTS: return "Hearts";
            //break;
        case Suit::CLUBS: return "Clubs";
            //break;
        default: return "???";
    }
    return "???";
}
std::string toString(Rank r)
{
    switch (r)
    {
        case Rank::ACE: return "Ace";
            //break;
        case Rank::TWO: return "2";
            //break;
        case Rank::THREE: return "3";
            //break;
        case Rank::FOUR: return "4";
            //break;
        case Rank::FIVE: return "5";
            //break;
        case Rank::SIX: return "6";
            //break;
        case Rank::SEVEN: return "7";
            //break;
        case Rank::EIGHT: return "8";
            //break;
        case Rank::NINE: return "9";
            //break;
        case Rank::TEN: return "10";
            //break;
        case Rank::QUEEN: return "Queen";
            //break;
        case Rank::JACK: return "Jack";
            //break;
        case Rank::KING: return "King";
            //break;
        default: return "???";
    }
    return "???";
}
std::ostream& operator<<(std::ostream& out, const Card& c)
{
    out << toString(c.rank) << " of " << toString(c.suit);
    return out;
}

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
