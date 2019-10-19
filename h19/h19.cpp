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
#include <algorithm>

using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID


#include "h19.h"

/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
vector<WORD> spellCheck(istream& in,
                    const vector<string>& dictionary,
                    const vector<string>& excluded)
{
    vector<WORD> results;
    string word;
    size_t len = word.size();

    while (in)
    {
        long long pos = in.tellg();
        if (pos == -1)
        {
            break;
        }
        in >> word >> ws;
        for (size_t i = 0; i < word.size(); ++i)
        {
            word.at(i) = tolower(word.at(i));

            if (ispunct(word.at(i)))
            {
                word.erase(i--, 1);
            }
        }
        bool found = false;
        for (size_t i = 0; i < results.size(); i++)
        {
            if (results.at(i).word == word)
            {
                results.at(i).positions.push_back(pos);
                found = true;
                break;
            }
        }
        if (found)
        {
            for (size_t i = 0; i < word.size(); i++)
            {
                if (word == word)
                {
                    found = false;
                    break;
                }
            }
        }
        if (!found)
        {
            for (size_t i = 0; i < excluded.size(); i++)
            {
                if (excluded.at(i) == word)
                {
                    found = true;
                    continue;
                }
            }
        }
        if(! found)
        {
            for(size_t i = 0; i < dictionary.size(); ++i)
            {
                if(dictionary.at(i) == word)
                {
                    found = true;
                    break;
                }
            }
        }
        if(! found)
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