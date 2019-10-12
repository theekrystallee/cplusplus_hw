/**
    @file h18.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H18_H_
#define H18_H_
#include <vector>
#include <string>
/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */
std::vector<std::string> fileToWords(const std::string& filename);

#endif
