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
#include <iomanip>

using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

#include "h18.h"

/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */

std::vector<std::string> fileToWords(const std::string& filename)
{

    ifstream in(filename);

    if (in.fail())
    {
        throw invalid_argument("cannot open " + filename + ". ");
    }

    vector <string> results;
    string line, word;

    while (getline(in, line))
    {
        istringstream input(line);
        while (input >> word) results.push_back(word);
    }
    return results;
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