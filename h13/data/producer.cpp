#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;
string makeRandomSet(int i)
{
    ostringstream out;
    out << fixed << setprecision(2);
    int n = i; // 1 + rand() % 5; // most 6 sets
    for (int i = 0; i < n; i++)
    {
        int n3 = 1 + rand() % 4;
        for (int j = 0; j < n3; j++)
        {
            int n1 = 1 + rand() % 8;
            out << n1;
            if (rand() % 2) out << " "; else out << "  ";
            double d = (10 + (rand() % 100)) / 10.0;
            out << d;
            if (rand() % 2) out << " "; else out << "   ";
            if (rand() % 5 == 0) out << endl;
        }
        out << " 0 ";
    }
    
    return out.str();
}

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        ofstream out("ds" + to_string(i) + ".txt");
        out << makeRandomSet(i) << endl;
        out.close();
    }
    
    for (int i = 8; i <= 25; i++)
    {
        ofstream out("ds" + to_string(i) + ".txt");
        out << makeRandomSet(2 + rand() % 5) << endl;
        out.close();
    }
    
    ofstream out("ds0.txt");
    out << endl << endl << endl;
    out.close();
    
    return 0;
}