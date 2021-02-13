/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h07.cpp
 */
#include <string>
#include <cctype>
using namespace std;

string STUDENT = "klee159";  // Add your Canvas login name

int sumNums(const string& s)
{
    int sum = 0;
    int num = 0;
    for (size_t i = 0, len = s.size(); i <= len - 1; i++){
        char digit = s.at(i);
        if (isdigit(digit)){
            digit -= '0';
            num *= 10;
            num += digit;
        }
        else{
            sum += num;
            num = 0;
        }
    }
    sum += num;
    return sum;
}

/////////////// Optional Student Code /////////////////
int run(){
    return 0;
}


