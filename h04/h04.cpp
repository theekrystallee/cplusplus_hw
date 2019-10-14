/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW/AM
 *  @file h04.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID
extern string ASSIGNMENT;

// Add your function declaration here
// string getStatus(double gpa, int credits, int honorsCredits);

/**
 * A program that calculates your graduation status.
 * @return 0 for success.
 */
int run()
{
	// DON'T CHANGE ***ANYTHING*** IN THIS FUNCTION

	cout << STUDENT << "-" << ASSIGNMENT << "-Graduation Calculator" << endl;
	cout << "-----------------------------------------" << endl;

	cout << "Enter gpa, total credits and honors credits: ";
	double gpa;
	int credits, honorsCredits;
	cin >> gpa >> credits >> honorsCredits;

	// You will write this function
	// string result = getStatus(gpa, credits, honorsCredits);

	string summa = "summa cum laude";
	string magna = "magna cum laude";
	string cumLaude = "cum laude";
	string grad = "graduating";
	string notGrad = "not graduating";

	if (gpa < 2.0 && credits < 180 && honorsCredits < 17)
	{
		cout << "Result is [\"" << notGrad << "\"]" << endl;
	}
	if (gpa > 2.0 && credits < 180 && honorsCredits < 31)
	{
		cout << "Result is [\"" << notGrad << "\"]" << endl;
	}
	if (gpa < 2.0 && credits > 180 && honorsCredits < 31)
	{
		cout << "Result is [\"" << notGrad << "\"]" << endl;
	}
	if (gpa >= 2.0 && gpa < 3.6 && credits >= 180)
	{
		cout << "Result is [\"" << grad << "\"]" << endl;
	}
	if (gpa >= 3.6 && gpa < 3.8 && credits >= 180 && honorsCredits < 15)
	{
		cout << "Result is [\"" << cumLaude << "\"]" << endl;
	}
	if (gpa >= 3.8 && credits >= 180 && honorsCredits < 15)
	{
		cout << "Result is [\"" << magna << "\"]" << endl;
	}
	else if (gpa >= 3.6 && gpa < 3.8 && credits >= 180 && honorsCredits >= 15)
	{
		cout << "Result is [\"" << magna << "\"]" << endl;
	}
	else if (gpa >= 3.8 && credits >= 180 && honorsCredits >= 15)
	{
		cout << "Result is [\"" << summa << "\"]" << endl;
	}
    return 0;
}

// Implement your function here

