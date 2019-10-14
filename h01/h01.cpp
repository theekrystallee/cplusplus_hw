/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW/AM
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "klee159";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * A program that adds and subtracts time from user input.
 * @return 0 for success.
 */
int run()
{
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Time on My Hands" << endl;
    cout << string(50, '-') << endl;

    // cout << "Give me a time (such as 3:57) and a duration\n"
    // << "(such as 1:05), and I'll tell you the sum\n"
    // << "(that is, the time that follows the given time\n"
    // << "by the given duration), and difference (the time that\n"
    // << "precedes the given time by that duration).\n" << endl;

    // // Input

    // cout << STUDENT << "-" << ASSISNGMENT << ": ";
    // cout << "Time on My Hands" << endl;
    // cout << string(50, '-') << endl;

    cout << "Give me a time (such as 3:57) and a duration\n"
    << "(such as 1:05), and I'll tell you the sum\n"
    << "(that is, the time that follows the given time\n"
    << "by the given duration), and difference (the time that\n"
    << "precedes the given time by that duration).\n" << endl;

    int timeHours;
    int timeMinutes;
    cout << "   Time: ";
    cin >> timeHours;
    cin.get();
    cin >> timeMinutes;

    int durationHours;
    int durationMinutes;
    cout << "   Duration: ";
    cin >> durationHours;
    cin.get();
    cin >> durationMinutes;

    // Processing
    int timeTime = timeHours * 60 + timeMinutes;
    int duration = durationHours * 60 + durationMinutes;
    int after = timeTime + duration;
    int before = timeTime - duration + 1440;
    int afterHours = (after / 60 % 12 + 11) % 12 + 1;
    int afterMinutes = after % 60;
    int beforeHours = (before / 60 + 11) % 12 + 1;
    int beforeMinutes = before % 60;

    // Output
    cout << endl;
    cout << setfill('0');
    cout << durationHours << ":" << setw(2) << durationMinutes
    << " hours after, and before, "
    << timeHours << ":" << setw(2) << timeMinutes
    << " is [" << afterHours << ":" << setw(2) << afterMinutes
    << ", " << beforeHours << ":" << setw(2) << beforeMinutes
    << "]" << endl;

    return 0;
}