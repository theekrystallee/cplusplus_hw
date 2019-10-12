/**
 *  @author Stephen Gilbert
 *  @version Tests for CS 150 homework
 *  @file tests.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

#include "cs150check.h"
#include "h15.h"

/**
 * Run your program's tests
 */
void runTests()
{

	//    ///////////// Begin a set of tests
    beginTests(); // test heading
    beginFunctionTest("Compiling under two different platforms.");
    if (system("g++ -std=c++98 string-test.cpp"))
        failMsg("Cannot compile under C++ 98", 10);
    else
        passMsg("Compiles under C++ 98", 10);

    if (system("g++ -std=c++17 string-test.cpp"))
        failMsg("Cannot compile under C++ 17", 10);
    else
        passMsg("Compiles under C++ 17", 10);
    endFunctionTest();

#if __cplusplus <= 199711L
    cerr << "Testing using C++98" << endl;
    cerr << "------------------------------------------" << endl;
#else
    cerr << "Testing using C++11 or greater" << endl;
    cerr << "------------------------------------------" << endl;
#endif
    beginFunctionTest("to_string function");
    assertEqualsMsg("to_string(42)", "42", to_string(42));
    assertEqualsMsg("to_string(3.F)", "3.000000", to_string(3.F));
    assertEqualsMsg("to_string(-1U)", "4294967295", to_string(-1U));
    assertEqualsMsg("to_string(4L)", "4", to_string(4L));
    assertEqualsMsg("to_string('c')", "99", to_string('c'));
    assertEqualsMsg("to_string(1.7L)", "1.700000", to_string(1.7L));
    assertEqualsMsg("to_string(2.7e3)", "2700.000000", to_string(2.7e3));
    assertEqualsMsg("to_string(2.17e-4)", "0.000217", to_string(2.17e-4));
    assertEqualsMsg("to_string(1.0/0.0)", "inf", to_string(1.0/0.0));
    assertEqualsMsg("to_string(-1.0/0.0)", "-inf", to_string(-1.0/0.0));
    assertEqualsMsg("to_string(0.0/0.0)", "-nan", to_string(0.0/0.0));

    endFunctionTest();

    endTests();
}

