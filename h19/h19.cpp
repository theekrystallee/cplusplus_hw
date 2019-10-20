/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h19.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
#include <istream>
#include <sstream>
#include <iomanip>

using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

#include "h19.h"

vector<WORD> spellCheck(istream& in,
                    const vector<string>& dictionary,
                    const vector<string>& excluded)
{
    // Create the empty results vector
    vector<WORD> results;
    string word;
    size_t len = word.size();

    // Read until end of file (while in)
        while (in)
    {

        // Save current position (in.tellg()->cast to long long)
        // If tellg() returns -1 (at end of file) Then Exit the loop

        long long pos = static_cast<long long>(in.tellg());
        if (pos == -1)
        {
            break; // Then Exit the loop
        }
        // Read next word (in >> word >> ws)
        in >> word >> ws;
        string temp;
        for (char c : word)
        {
            if (!ispunct(c))
            {
                temp += tolower(c);
            }
        }
        word = temp;
        temp = "";

        bool found = false;

        for (auto& e : results)
        {
            if (word == e.word)
            {
                found = true;
            }
        }

        if (found)
        {
            for (auto& e : results)
            {
                if (word == e.word)
                {
                    e.positions.push_back(pos);
                }
            }
        }
        if (found)
            continue;

        if (!found)
        {
            for (auto d : dictionary)
            {
                if (word == d)
                    found = true;
            }
        }

        if (found)
            continue;

        if (!found)
        {
            WORD w;
            w.word = word;
            w.positions.push_back(pos);
            results.push_back(w);
        }
    }
    return results;
}
/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}