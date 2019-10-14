/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h08.cpp
 */
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

#include "h08.h"

string zipZap(const std::string& str)
{

    string str1 = str;

    if(str.empty())
    {
        return str1;
    }

    if(str.size() <= 2)
    {
        return str1;
    }

    char last = str[0];

    int j = 2;

    for(int i = 2, len = str.size(); i < len; i++)
    {
        if(str1[i] == 'p' && last == 'z')
        {
            j--;
        }
        last = str[i - 1];
        str1[j] = str[i];
        j++;

    }
    str1.resize(j);
    return str1;
}

int countCode(const std::string& str)
{
    int result = 0;
    for (size_t i = 4, len = str.size(); i <= len; i++)
    {
        string word = str.substr(i - 4, 4);
        string front = word.substr(0, 2);
        string back = word.substr(3);
        if (front == "co" && back == "e") result++;
    }
    return result;
}

string everyNth(const std::string& str, int n)
{
    if(n < 1)
    {
        return "";
    }
    string str1 = str;
    int j = 1;
    int count = 1;

    for(int i=1, len = str.size(); i < len; i++)
    {
        if(count == n)
        {
            str1[j++] = str[i];
            count = 1;
            continue;
        }
        count++;
    }
str1.resize(j);
return str1;
}

bool prefixAgain(const std::string& str, int n)
{

    string prefix = str.substr(0, n);

    for (int i = 1, len = str.size() - n; i <= len; i++)
    {
        string word = str.substr(i, n);
        if (word == prefix)
        {
            return true;
        }
    }
    return false;
}

////////////////// STUDENT TESTING /////////////
int run()
{
    return 0;
}