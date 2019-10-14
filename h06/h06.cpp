/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h06.cpp
 */
#include <string>
#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

string STUDENT = "klee159";  // Add your Canvas login name

string toFrenchGender(const std::string& country);
string toFrenchGender(const string& s)
{

    string result, prefix, plain, islands, last, first, vowels, end, mas;
    islands = "iles";
    size_t len = s.size();
    first = s.at(0);
    last = s.substr(len - 1);
    end = s.substr(len - 2);
    vowels = s.substr(0, 1);
    if (string::npos != mas.find(s))
    {
        prefix = "le ";
     }
    // else if (plain == "Israel" || plain == "Madagascar" || plain == "Sri Lanka"
    //     || plain == "Singapore" || plain == "Monaco" || plain == "Cuba" || plain == "Cyprus"
    //     || plain == "Zaire")
    // {
    //     prefix = "";
    // }
    if (s.substr(0, 4) == islands || end == "es"|| end == "is" || end == "os" || end == "as")
    {
        prefix = "les ";
    }
    if (string::npos != vowels.find(s))
    {
        prefix = "le ";
    }
    if (last == "e" || last == "o")
    {
        prefix = "la ";
    }
    else if (s == "Madagascar" || s == "Monaco" || s == "Belize" || s == "Honduras"
        || s == "Israel" || s == "Cyprus" || s == "Cuba")
    {
        prefix = "";
    }
    else
    {
        prefix = "le ";
    }
    result = prefix + s;
    return result;
}
/////////////// Optional Student Code /////////////////
int run()
{
    return 0;
}
