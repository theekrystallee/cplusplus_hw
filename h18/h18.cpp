/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h18.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
#include <sstream>

using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID


#include "h18.h"

// Place your function definition here

/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */

std::vector<std::string> fileToWords(const std::string& filename)
{
    ifstream in("words");
    if (in.fail())
    {
        throw invalid_argument("file cannot be opened");
    }
    vector<string> results;
    string word;
    while (!in.eof())
    {
        if (in >> word)
        {
            getline (in, word);
            results.push_back(word);
             if (in.eof())
             {
                getline (in, word);
                results.push_back(word);
                break;
             }
        }
        getline(in, word);
        results.push_back(word);
        // if (in.eof())
        // {
        //     std::getline(cin, filename);
        //     results.push_back(results(word));;
        // }

    }
    return results;

    in.open("excluded.txt");

    if (in.fail())
    {
        throw invalid_argument("invalid filename");
    }
    while (!in.eof())
    {
        string input;
        for (size_t i = 0, len = word.size(); i < len; i++)
        {
            if (in.eof() && !in.fail())
            {
                cin >> input;
                cout << input;
            }

        }
        cin >> input;
        cout << input;
    }
    return results;;
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    auto v = fileToWords("excluded.txt");
    cout << "Excluded words:" << endl;
    for (auto e : v) cout << " -" << e << endl;
    return 0;
}