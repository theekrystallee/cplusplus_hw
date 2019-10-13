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
    string wordCount;
    int i = 0;
    int index = -1;
    getline (in, line);

    while (!in.eof())
    {

        i++;
        getline (in, line);
        results.push_back(line);

        for (int j = 0; j <= i; j++)
        {
            cout << wordCount[j] << endl;


        }

        if (in.eof())
        {
            break;
        }

    }
    return results;


    auto v = "excluded.txt";
    string word;

    if (in.fail())
    {
        throw invalid_argument("invalid filename");
    }

    while (!in.eof())
    {
        if (!empty(filename))
        {
            getline (in, word);
            results.push_back(word);
             if (in.eof())
             {
                getline (in, word);
                results.push_back(word);

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