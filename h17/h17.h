#ifndef H17_H
#define H17_H
#include <string>
#include <iostream>

// Rank and Suit enumerated types
enum class Suit
{
    CLUBS, SPADES, DIAMONDS, HEARTS
};

enum class Rank
{
    ACE, TWO, THREE, FOUR, FIVE,
    SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING
};

// A playing card structure
struct Card
{
    Rank rank;
    Suit suit;
};

/**
 * Convert a Suit into the form "Clubs", "Hearts", etc.
 * @param s a Suit parameter
 * @return the string representation as described.
 */
std::string toString(Suit s);

/**
 * Convert a Rank into the form "Ace", "2", "3", "Queen", etc.
 * @param r a Rank parameter
 * @return the string representation as described.
 */
std::string toString(Rank r);

/**
 * Prints a card in the form "Ace of Spades".
 * @param out the stream to print on.
 * @param c the card to print.
 * @return the stream after printing.
 */
std::ostream& operator<<(std::ostream& out, const Card& c);

#endif

