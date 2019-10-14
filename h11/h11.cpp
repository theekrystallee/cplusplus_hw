/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h11.cpp
 */
#include <string>
#include <iostream>
using namespace std;

#include "h11.h"

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

// Write your function here
void strip()
{
    char ch;
    bool inString = false; // not inside a single line
    bool inSingle = false; // not inside a multi line
    bool inMulti = false; // not in string

    while (cin.get(ch))
    {
        if (inSingle && ch == '\n')
        {
            inSingle = false;
        }
        else if (inString && ch == '"')
        {
            inString = false;
        }
        else if (inMulti && ch == '*' && cin.peek() == '/')
        {
            inMulti = false;
            cin.get(ch);
            cin.get(ch);
        }
        else if (!inSingle && !inMulti && !inString)
        {
            if (ch == '"') inString = true;
            else if (ch == '/' && cin.peek() == '*') inMulti = true;
            else if (ch == '/' && cin.peek() == '/') inSingle = true;
        }
        else if (inString && ch == '\\' && cin.peek() == '"')
        {
            cout.put(ch);
            cin.get(ch);
        }
        if (cin && !inSingle && !inMulti)
        {
            cout.put(ch);
        }
    }
}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    //cout << "Student testing" << endl;
    strip();
    return 0;
}