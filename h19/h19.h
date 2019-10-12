/**
    @file h19.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H11_H_
#define H11_H_
#include <vector>
#include <string>

struct WORD
{
    std::string word;
    std::vector<long long> positions;
};

/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
std::vector<WORD> spellCheck(std::istream& in,
                    const std::vector<std::string>& dictionary,
                    const std::vector<std::string>& excluded);

#endif
