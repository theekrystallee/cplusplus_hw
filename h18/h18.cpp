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
    ifstream in(filename.c_str());
    size_t len = filename.size();
    string first, last;
    first = filename.at(0);
    last = filename.substr(len - 1);

    if (in.fail())
    {
        throw invalid_argument("invalid filename");
    }
    vector<string> results;
    string line;
    int i = 0;
    getline (in, line);

    while (!in.eof())
    {
        while (in.peek())
        {
            getline(in, line);
            results.push_back(line);
            if (!empty(first) && !empty(last))
            {
                getline(in, line);
                results.push_back(line);
                if (in.eof())
                {
                    getline (in, line);
                    results.push_back(line);
                    break;
                }
            }
        }

    }
    return results;

    string word;

    if (in.fail())
    {
        throw invalid_argument("invalid filename");
    }

    while (cin.peek() && !empty(first) && !empty(last) && !in.eof())
    {
        getline (in, first);
        results.push_back(word);
        if (!empty(filename))
        {
            getline (in, word);
            results.push_back(word);
             if (in.eof())
             {
                results.push_back(last);
                getline (in, word);

             }
        }
        getline(in, line);
        results.push_back(line);
        // if (in.eof())
        // {
        //     std::getline(cin, filename);
        //     results.push_back(results(word));;
        // }

    }
    return results;

    // in.open("excluded.txt");

    // if (in.fail())
    // {
    //     throw invalid_argument("invalid filename");
    // }
    // while (
    // {
    //     string input;
    //     istringstream in(input);
    //     in >> input;
    //     for (size_t i = 0, len = word.size(); i < len; i++)
    //     {
    //         if (in.eof() && !in.fail())
    //         {
    //             input++;
    //             return input;
    //         }

    //     }
    //     in >> input;
    //     input++;
    //     out << input;
    // }
    //return out;
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