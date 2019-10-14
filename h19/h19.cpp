/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h11.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
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
    long long position = 0;

    //pos_type tellg() = -1;
    while (true)
    {
        if (position == 0)
        {
            return results;
            break;
        }
        in >> word >> ws;
        // position (in.tellg()) static_cast<long long>);
        // if (in.eof() && in.tellg())
        // {
        //     break;
        // }
        // in >> word >> ws;

        // if (isalpha(word))
        // {
        //     tolower(word);

        //     if (ispunct(static_cast<unsigned char>(word)))
        //     {
        //         word.erase();
        //     }
        // }

    }
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;

    return 0;
}