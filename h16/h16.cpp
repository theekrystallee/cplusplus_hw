/**
 *  @author Krystal Lee
 *  @date Fall 2019 MW-AM
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here

void get(std::istream& in, Point& p)
{
    char ch;
    in >> p.x >> ch >> p.y;
}
void print(std::ostream& out, const Point& p)
{
    out << "(" << p.x << ", " << p.y << ")";
}
double distanceBetween(const Point& a, const Point& b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt (dx * dx + dy * dy);
}
Point midpoint(const Point& a, const Point& b)
{
    struct Point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}
double perimeter(const Triangle& t)
{
    return distanceBetween(t.p1, t.p2) + distanceBetween(t.p2, t.p3)
        + distanceBetween(t.p3, t.p1);
    // double perim = 0.0;
    // perim += distanceBetween(t.p1, t.p2);
    // perim += distanceBetween(t.p2, t.p3);
    // perim += distanceBetween(t.p3, t.p1);
    // return perim;
}
/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    cout << "Enter a point as (x, y): ";
    Point p;
    get(cin, p);
    cout << "You entered ";
    print(cout, p);
    cout << endl;

    return 0;
}