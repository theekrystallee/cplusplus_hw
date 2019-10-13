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

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID


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


    if (in.fail())
    {
        throw invalid_argument("invalid filename");
    }
    vector<string> results;
    string line;

    while (!in.eof())
    {
        getline(in, line);
        results.push_back(line);
        // if (in.eof())
        // {
        //     std::getline(cin, filename);
        //     results.push_back(results(word));;
        // }

    }
    in.close();
    return results;

    ifstream input("excluded.txt");

    if (input.fail())
    {
        throw invalid_argument("invalid filename");
    }

    while (!input.eof())
    {
        if (!empty(filename))
        {
             cout << filename;
             if (!isspace(filename.back()))
             {
                 cout << " ";
             }
        }
        getline(input, line);
        results.push_back(line);
        // if (in.eof())
        // {
        //     std::getline(cin, filename);
        //     results.push_back(results(word));;
        // }

    }
    input.close();
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