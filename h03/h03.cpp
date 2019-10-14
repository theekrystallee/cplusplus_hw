/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW/AM
 *  @file h03.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "klee159";  // Add your Canvas login name
extern string ASSIGNMENT;

/**
 * A grade calculator program that converts letter grade into a numeric grade point.
 * @return 0 for success.
 */
int run()
{
    cout << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "Grade Calculator" << endl;
    cout << string(50, '-') << endl;

    // Implementation comments
    // Write a program that translates a letter grade into a numeric grade point
    // Letter grades are A, B, C, D, and F, possibly followed by '+' or '-'
    // Their numeric values are 4, 3, 2, 1, and 0
    // Adding a '+' to the grade increases the numeric value by 0.3, a '-' decreases it by 0.3
    // If letter grade input is illegal (such as "Z"), then output should be "INVALID LETTER GRADE"
    // If the combination is illegal (such as "A+" or "F-")
    // then the output should be "INVALID GRADE COMBINATION"
    // If there is some other problem with the input, then use "INVALID INPUT"


    // Prompt and input
    cout << "Enter your letter grade: ";
    string gradeIn;
    getline(cin, gradeIn);

    // Processing
    double gradePoints = -1;

    if (gradeIn == "A") gradePoints = 4.0;
    else if (gradeIn == "A-") gradePoints = 3.7;
    else if (gradeIn == "B+") gradePoints = 3.3;
    else if (gradeIn == "B") gradePoints = 3.0;
    else if (gradeIn == "B-") gradePoints = 2.7;
    else if (gradeIn == "C+") gradePoints = 2.3;
    else if (gradeIn == "C") gradePoints = 2.0;
    else if (gradeIn == "C-") gradePoints = 1.7;
    else if (gradeIn == "D+") gradePoints = 1.3;
    else if (gradeIn == "D") gradePoints = 1.0;
    else if (gradeIn == "D-") gradePoints = 0.7;
    else if (gradeIn == "F+") gradePoints = 0.3;
    else if (gradeIn == "F") gradePoints = 0.0;

    // Output
    cout << fixed << showpoint << setprecision(1);
    if (gradePoints >= 0.0)
    {
        cout << "Grade value is [" << gradePoints << "]" << endl;
    }
    if (gradeIn == "Z")
    {
        string error2 = "INVALID LETTER GRADE";
        cout << "Grade value is [" << error2 << "]" << endl;
    }
    else
    {
        string error1;
        string error3;
        if (gradeIn == "A+" || gradeIn == "F+" || gradeIn == "F-")
        {
            error1 = "INVALID GRADE COMBINATION";
            cout << "Grade value is [" << error1 << "]" << endl;
        }
        else
        {
            error3 = "INVALID INPUT";
            cout << "Grade value is [" << error3 << "]" << endl;
        }
    }

    return 0;
}

