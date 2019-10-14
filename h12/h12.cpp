/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h12.cpp
 */
#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

// Write your function here
void expense()
{
    char ch;
    double num = 0.0;
    double total = 0.0;

    while (cin.peek() != EOF)
    {
        while (cin.get(ch))
        {
            if (isspace(ch) && isspace(cin.peek()))
            {
                while (isspace(cin.peek()))
                {
                    cin.get(ch);
                }
            }
            if (isdigit(cin.peek()))
            {
                cout << ", ";
                break;
            }
            cout.put(ch);
        }

        while (cin.get(ch))
        {
            if (isdigit(ch))
            {
                cin.unget();
                cin >> num;
            }
            else if (ch == ' ' || ch == '\n')
            {
                total += num;
                num = 0.0;
            }
            if (ch == '\n')
            {
                cout << fixed << setprecision(2);
                cout << total << '\n';
                total = 0.0;
                break;
            }
        }
    }
}

//////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    expense();
    return 0;
}
