/**
    @file h16.h
    @author YOUR NAME HERE
    @date what day and meeting time
    Declarations for CS 150 Homework
*/
#ifndef H16_H_
#define H16_H_

#include <vector>
#include <stdexcept>
#include <string>
#include <iostream>
#include <sstream>

// Place your Point structure definition here


// Place your Triangle structure definition here


/**
 * Reads a point in the form x,y.
 * @param in the input stream.
 * @param p the Point to populate
 */
void get(std::istream& in, Point& p);

/**
 * Displays a Point in the form (x, y).
 * @param out the stream to print on
 * @param p the Point to print
 */
void print(std::ostream& out, const Point& p);

/**
 * Calculate the distance between two Points.
 * @param a the first point.
 * @param b the second point.
 * @return the distance as a double.
 */
double distanceBetween(const Point& a, const Point& b);

/**
 * Given two points, find their midpoint.
 * @param a the first point.
 * @param b the second point.
 * @return the midpoint.
 */
Point midpoint(const Point& a, const Point& b);

/**
 * Calculates the perimeter of the Triangle t.
 * @param t the Triangle to examine.
 * @return the perimeter.
 */
double perimeter(const Triangle& t);

#endif
