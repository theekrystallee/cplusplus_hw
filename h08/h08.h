#ifndef H08H_
#define H08_H_
/**
    @file h08.h
    @author Stephen Gilbert (do not change this file)
    @version CS 150
*/
#include <string>
/**
    zipZap(str) removes the middle letters from all "zip" or "zap" strings.

    @param str the input string.
    @return Look for patterns like "zip" and "zap" in the input string:
        any substring of length 3 that starts with "z" and ends with "p".
        Return a string where for all such words, the middle letter
        is gone, so "zipXzap" returns "zpXzp".
        <ul>
        <li>zipZap("zipXzap") returns "zpXzp"
        <li>zipZap("zopzop") returns "zpzp"
        <li>zipZap("zzzopzop") returns "zzzpzp"
        </ul>
*/
std::string zipZap(const std::string& str);

/**
    countCode(str) counts all occurences of the "code" pattern in str.

    @param str the input string.
    @return the number of times that the string "code" appears
        anywhere in the given input string, except that we'll accept
        <b>any</b> letter for the 'd', so "cope" and both "cooe" count.
        <ul>
        <li>countCode("aaacodebbb") returns 1
        <li>countCode("codexxcode") returns 2
        <li>countCode("cozexxcope") returns 2
        </ul>
*/
int countCode(const std::string& str);

/**
    everyNth(str, n) calculates every nth character.

    @param str the input string to check.
    @param n the n-th character to use
    @return the string made starting with char 0, and then
        every n-th char of the string. So, if n is 3,
        use char 0, 3, 6, and so on. If n is
        less than 1, return the empty string
        <ul>
        <li>everyNth("Miracle", 2) returns "Mrce"
        <li>everyNth("abcdefg", 2) returns "aceg"
        <li>everyNth("abcdefg", 3) returns "adg"
        </ul>
*/
std::string everyNth(const std::string& str, int n);

/**
    prefixAgain(str, n) returns true when the prefix(0,n) appears again in the string.

    @param str the input string.
    @param n the number of characters to count for the prefix.
    @return consider the prefix string made of the first n characters of
        the input string. Does that prefix string appear somewhere else
        in the string? Assume that the string is not empty and that n
        is in the range 1..inStr.length().
        <ul>
        <li>prefixAgain("abXYabc", 1) returns true
        <li>prefixAgain("abXYabc", 2) returns true
        <li>prefixAgain("abXYabc", 3) returns false
        </ul>
*/
bool prefixAgain(const std::string& str, int n);

#endif
