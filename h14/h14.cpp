/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

#include "h14.h"

// Define your functions here
string getLine(const string& prompt)
{
    string result;
    if (!empty(prompt))
    {
        cout << prompt;
        if (!isspace(prompt.back()))
        {
            cout << " ";
        }
    }
    getline(cin, result);
    return result;
}

int getInt(const string& prompt)
{
    string input = getLine(prompt);
    int result = 0;

    while (true)
    {
        if (input != "")
        {
            istringstream in(input);
            int n;
            in >> n;
            if (in.eof() && !in.fail())
            {
                return n;
            }
            in >> ws;
            if (in.eof() && !in.fail())
            {
                return n;
            }
        }
        input = getLine(prompt);
    }
}

double getReal(const string& prompt)
{
    double result = 0.0;
    string input = getLine(prompt);

    while (true)
    {
        if (input != "")
        {
            istringstream in(input);
            double n;
            in >> n;
            if (in.eof() && !in.fail())
            {
                return n;
            }
            in >> ws;
            if (in.eof() && !in.fail())
            {
                return n;
            }
        }
        input = getLine(prompt);
    }
}

bool getYN(const string& prompt)
{
    bool result = false;
    string input = getLine(prompt);

    while (true)
    {
        if (input.at(0) == 'Y' || input.at(0) == 'y')
        {
            return true;
        }
        if (input.at(0) == 'N' || input.at(0) == 'n')
        {
            return false;
        }
        input = getLine(prompt);
    }
    return result;
}

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
