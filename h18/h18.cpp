/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
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
#include <algorithm>

using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

#include "h18.h"

vector<string> fileToWords(const string& filename)
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
        while (input >> word)
        {
            results.push_back(word);
        }
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