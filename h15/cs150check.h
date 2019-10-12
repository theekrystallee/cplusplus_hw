/**
 * Basic unit tests for CS 150
 * @author Steve G.
 * @version FALL 2017
 */
#ifndef CS150CHECK_H
#define CS150CHECK_H

#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>

extern bool TESTING;

extern std::string STUDENT;
extern std::string ASSIGNMENT;
extern std::string TESTFILE;

extern int ARGC;
extern char ** ARGV;

/**
 * Print error messages for all of the assertEquals() methods
 * This is usually called from a macro that "stringifies" the actual argument
 * 	- Also increments the fail counter.
 *
 * @param msg usually the actual function under test (stringified by the macro)
 * @param expected expected value (of any type)
 * @param actual value of any type
 */
template <class T>
void _failReportEquals(const std::string& msg, const T& expected, const T& actual)
{
	std::cerr << "   X " << msg << ": expected [" << expected;
	std::cerr << "] but found [" << actual;
	std::cerr << "]" << std::endl;
	extern int fail;
	fail++;
}


/**
 *	Report of difference when comparing doubles.
 * 	@param msg message to display.
 * 	@param expected expected value.
 * 	@param tolerance tolerance for checking.
 * 	@param diff difference between values.
 */
void _failReportDifference(const std::string& msg, double expected, double tolerance, double diff);

/**
 * Prints the success message for a test.
 * @param msg the message to print
 */
void _successReport(const std::string& msg);

/**
 * Prints the fail message for the non-assertEquals types methods.
 * 	- also increments the fail counter.
 *
 * @param msg the message to print
 */
void _failReport(const std::string& msg);

//////////// OVERLOADED VERSION OF ASSERT_EQUALS ///////////////////////
/**
 * For string parameters. Called from a macro.
 * @param msg - usually the stringified expression used to calculate "actual"
 * @param expected - expected string
 * @param actual - actual string.
 */
void _assertEquals(const std::string& msg, const std::string& expected, const std::string& actual);

/**
 * For int parameters. Called from a macro.
 * @param msg - usually the stringified expression used to calculate "actual"
 * @param expected - expected string
 * @param actual - actual string.
 */
void _assertEquals(const std::string& msg, int expected, int actual);

/**
 * For double parameters. Called from a macro.
 * NOTE - THIS IS DISABLED ON PURPOSE
 * @param msg - usually the stringified expression used to calculate "actual"
 * @param expected - expected value
 * @param actual - actual actual
 */
void _assertEquals(const std::string& msg, double expected, double actual);

/**
 * For double parameters WITH tolerance.
 * @param msg - usually the stringified expression used to calculate "actual"
 * @param expected - expected value
 * @param actual - actual actual
 * @param tolerance - the tolerance of the answer.
 */
void _assertEquals(const std::string& msg, double expected, double actual, double tolerance);
void _assertEquals(const std::string& msg, long double expected, long double actual);

/**
 * For double parameters WITH tolerance.
 * @param xmsg - an additional explanatory message
 * @param msg - usually the stringified expression used to calculate "actual"
 * @param expected - expected value
 * @param actual - actual actual
 * @param tolerance - the tolerance of the answer.
 */
void _assertEquals(const std::string& xmsg, const std::string& msg, double expected, double actual, double tolerance);

/**
 * Assert that a condition is true.
 * @param cond the condition to check.
 * @param msg the message to display if failing.
 */
void _assertTrue(bool cond, const std::string& msg);

/**
 * Assert that some condition is false.
 * @param cond the condition that should be false.
 * @param msg the message to display.
 */
void _assertFalse(bool cond, const std::string& msg);

/**
 * Fails and prints an error message.
 * @param msg the message to display.
 */
void failMsg(const std::string& msg, int pts = 1);

/**
 * Passes and prints a message.
 * @param msg the message to display.
 */
void passMsg(const std::string& msg, int pts = 1);

/**
 * Begin a set of tests (sets everything to 0)
 */
void beginTests();

/**
 * Begins a function test. Sets the "current" test counter to 0.
 * @param functionName the function to test.
 */
void beginFunctionTest(const std::string& functionName);

/**
 * Ends a group of function tests.
 */
void endFunctionTest();

/**
 * Ends a suite of tests.
 */
void endTests();

/**
 * Runs the tests for these functions.
 */
void runTests();

/**
 * Run some IOTESTS
 */
int runIOTests(const std::string&);

/**
 * Run without tests.
 */
int run();


///////////////////////// SOME NEW UTILITY METHODS FOR ARRAYS ////////////////////
template <class T>
std::string aToStr(const T* a, int n)
{
    std::ostringstream sout;
    if (n > 0)
    {
        sout << a[0];
        for (int i = 1; i < n; i++)
            sout << ", " << a[i];
    }
    return sout.str();
}

template <class T>
void printA(const T* a, int n)
{
    std::cerr << aToStr(a, n);
}

template <class T>
void _assertArrayEquals(const std::string& msg, const T* expected, const T* actual, int n)
{
    extern int possible;
    possible++;
	std::string e = aToStr(expected, n);
	std::string a = aToStr(actual, n);
    if (e != a)
    {
        _failReportEquals(msg, e, a);
    }
    else
        _successReport(msg);
}

///////////////////////// SOME NEW UTILITY METHODS FOR VECTORS ////////////////////
/**
    Prints a vector int the form {e1, e2, e3}.
    @param out the output stream
    @param v the vector of type T
    @return the modified output stream.
*/
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& v)
{
    out << "{";
    if (v.size() > 0)
    {
        out << v.at(0);
        for (unsigned i = 1; i < v.size(); i++)
            out << ", " << v.at(i);
    }
    out << "}";
    return out;
}

/**
    Converts a vector to its string equivalent.
    @param v the vector of type T
    @return a string in the form {e1, e2, e3}
*/
template <typename T>
const std::string to_string(const std::vector<T>& v)
{
    std::ostringstream sout;
    sout << "{";
    if (v.size() > 0)
    {
        sout << v.at(0);
        for (unsigned i = 1; i < v.size(); i++)
            sout << ", " << v.at(i);
    }
    sout << "}";

    return sout.str();
}


//////////// MACROS USED TO CALL ASSERTS ////////////////////////
#define assertEquals(e, a) (_assertEquals(#a, e, a))
#define assertEqualsMsg(msg, e, a) (_assertEquals(msg, e, a))
#define assertDoubleEquals(e, a, t) (_assertEquals(#a, e, a, t))
#define assertDoubleEqualsMsg(m, e, a, t) (_assertEquals(m, #a, e, a, t))
#define assertTrue(e) (_assertTrue(e, #e))
#define assertFalse(e) (_assertFalse(e, #e))
#define assertTrueMsg(e, msg) (_assertTrue(e, msg))
#define assertFalseMsg(e, msg) (_assertFalse(e, msg))
#define assertArrayEquals(e, a, n) (_assertArrayEquals(#a, e, a, n))
#define assertArrayEqualsMsg(m, e, a, n) (_assertArrayEquals(m, e, a, n))

#endif
