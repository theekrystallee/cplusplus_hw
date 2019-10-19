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
        long long pos = static_cast<long long>(in.tellg());

        // If tellg() returns -1 (at end of file) Then Exit the loop
        if (pos == -1) break; // then exit the loop

        // Read next word (in >> word >> ws)
        in >> word >> ws;

        for (size_t i = 0; i < word.size(); ++i)
        {
            // Convert to lowercase, remove punctuation
            word.at(i) = tolower(word.at(i));

            if (ispunct(word.at(i)))
            {
                word.erase(i--, 1);
                continue;
            }
        }
        // Search the list of misspelled words (results)->set found
        bool found = true;

        for (size_t i = 0; i < results.size(); i++)
        {
            if (results.at(i).word == word)
            {
                results.at(i).positions.push_back(pos);
                found = true;
                break;
            }
        }

        // If found word Then
        // Add position to results
        // Go to top of loop

        // }
        // ElseIf not found
        // Search the list of excluded words->found

        // ElseIf not found
        // Search the dictionary->found
        // If found word Then (Not misspelled) Go to top of loop

        if(found)
        {
            for(size_t i = 0; i < dictionary.size(); i++)
            {
                if(dictionary.at(i) == word)
                {
                    found = false;
                    continue;
                }
            }
        }

        // ElseIf not found Create a WORD, populate with word, position
        // Add new WORD to results
        // End Loop

        if(found)
        {
            WORD w;
            w.word = word;
            w.positions.push_back(pos);
            results.push_back(w);
        }
    }

    // Return results (misspelled words and their positions)
    return results;
}
/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}