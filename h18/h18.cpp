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
    string s;

    ofstream out;
    ifstream in("words");


    if (in.fail())
    {
        throw invalid_argument("invalid " + filename);
    }
    string str;
    vector<string> word;

    while (!in.eof())
    {
        in >> str;
        word.push_back(str);
        // if (in.eof())
        // {
        //     std::getline(cin, filename);
        //     results.push_back(results(word));;
        // }

    }
    return word;
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