/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h19.cpp
 */
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <cctype>
#include <istream>
#include <sstream>
#include <iomanip>
#include <ostream>
using namespace std;

string STUDENT = "klee159"; // Add your Canvas/occ-email ID


#include "h19.h"

/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
template <class T>
vector<T> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)

{
    // string input;
    // cout << "Enter name of input file" << endl;
    // cin >> input;
    // isstream inputFile;
    // unordered_set<string>::const_iterator got = dictionary.find (word);


    // Create the empty results vector

    static vector<T> results;
    // Read until end of file (while in)
    while (in)
    {
        // Save current position (in.tellg()->cast to long long)
        long long pos =  in.tellg();
        // If tellg() returns -1 (at end of file) Then Exit the loop
        if (pos == -1) break;
            break;
        // Read next word (in >> word >> ws)
        string word;
        in >> word >> ws;
        for (size_t i = 0; i < word.size(); i++)
        {
            word.at(i) = tolower(word.at(i));
        // Convert to lowercase, remove punctuation
            // if (in.get(word))
            //     in.tolower(word);


        }

        int start = 0;
        size_t len = word.size();
        while (start)
        {
            if (ispunct(word.at(start)))
            {
                in.ignore(1024, '\n');
                break;
            }
        }

        if(ispunct(word.at(len)))
        {
            in.ignore(1024, '\n');
            break;
        }
        if (len > 0)
        {
            word = word.substr(start, len - start);
        }

        bool found = false;

        // for (size_t i = 0; i < results.size(); i++)
        // {
        //     if (results[i].word == word)
        //     {
        //         results[i].push_back(pos);
        //         found = true;
        //         break;
        //     }
            if(! found)
            {
                for(size_t i =0; i < excluded.size();i++)
                {
                    if(excluded[i] == word)
                    {
                        found = true;
                        break;
                    }
                }

            }

            if(! found)
            {
               for(size_t i =0; i < dictionary.size();i++)
                {
                    if(dictionary[i] == word)
                    {

                        found = true;
                        break;
                    }
                }
            }
            // if(! found)
            // {
            //     w;
            //     w.word = word;
            //     w.positions.push_back(pos);
            //     results.push_back(w);

            // }

        }
        return results;
    }
        // Search the list of misspelled words (results)->set found
        // If found word Then
        // Add position to results
        // Go to top of loop

    //     bool found = true;

    //     for (size_t i = 0; i < len; i++)
    //     {
    //         found = true;
    //         if (misspelled.at[i] == found)
    //         {
    //             results += positions;
    //             continue;
    //         }
    //     }
    //     return results;

    //         else if (misspelled.at[i] == !found)
    //         {
    //             for (vector<int>::size_t i = 0; i < len; i++)
    //             {
    //                 found = false;
    //             }

    //         }
    //         if (excluded.at[i] == found) continue;

    //         else if (!found)
    //         {
    //             for (vector<int>::size_t i = 0; i < len; i++)
    //             {
    //                 found = true;

    //                 if (found && dictionary.at[i] != word.at[i])
    //                     continue;
    //                 else if (!found)
    //                 {
    //                     results.push_back(word);
    //                 }
    //             }
    //             break;

    //             return vector<string>(results.begin(), results.end());
    //         }
    //     }

    //     if (found)
    //     {
    //         results += positions;
    //         results.push_back(positions);
    //         continue;
    //     }

    //     ElseIf not found
    //     Search the list of excluded words->found
    //     If found word Then Go to top of loop

    //     else if (!found)
    //     {
    //         string excluded = word.find(results);
    //         if (found) continue;
    //     }

    //     // ElseIf not found
    //     // Search the dictionary->found

    //     else if (!found)
    //     {
    //         word.find(dictionary);
    //         found = true;
    //     }

    //     // If found word Then (Not misspelled) Go to top of loop

    //     if (word != misspelled)
    //     {
    //         continue;
    //     }
    //     // ElseIf not found Create a WORD, populate with word, position
    //     else if (!found)
    //     {
    //         string word;
    //         word = word + positions;
    //         results.push_back(word);
    //     }
    //     // Add new WORD to results
    //     // End Loop
    //     // Return results (misspelled words and their positions)
    // }
    // vector<string>word;
    // vector<string> results;

    // results = results.push_back(word);
    // return results;



    // vector<string> results;

    // while (in)
    // {

    //     position = static_cast<long long> in.tellg();

    //     if (tellg() == in.eof() && tellg() == -1)
    //         break;

    //     in >> word >> ws;
    //     word = std::transform(word.begin(), word.end(), word.begin(), std::tolower);
    //     //word = (tolower(word))ispunct(word));
    //     if (word.back() == '.' || word.back() == ',' || word.back() == '?' || word.back() == '!')
    //     {
    //         word = word.erase(word.length() - 1);
    //     }



    // }
    // return 0;
// vector<WORD> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
// {
//     vector<WORD> results;
//     string word;
//     long long position;
//     bool found = false;

//     while (in)
//     {
//         position = static_cast<long long>(in.tellg());
//         if (position == -1) break;

//         in >> word >> ws;

//         for(WORD x:results)
//         {
//             if(x.word == word)
//             {
//                 x.positions.push_back(position);
//                 found = true;
//                 break;
//             }
//         }
//         if (found)
//             continue;
//         else if(!found)
//         {
//             for(auto excl : excluded)
//             {
//                 if(excl == word) found = true;
//             }
//         }
//         if (found) continue;
//         else if (!found)
//         {
//             for(auto dict : dictionary)
//             {
//                 if(dict == word) found = true;
//             }
//         }
//         if (found) continue;
//         else if(!found)
//         {
//             WORD str2;
//             str2.word = word;
//             str2.vect.push_back(position);
//             vect.push_back(str2);
//         }
//     }
//     return results;
// }




// checkAnswers

// void spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
// {
//     const vector<string> results;
//     string word;
//     long long position;
//     bool found = false;

//     while (in)
//     {
//         position = static_cast<long long>(in.tellg());
//         if (position == -1) break;

//         in >> word >> ws;

//         for(size_t i = 0; i < word.size(); i++)
//         {
//             if(word == word)
//             {
//                 word.push_back(position);
//                 found = true;
//                 break;
//             }
//         }
//         if (found)
//         {
//             continue;
//         }
//         else if(!found)
//         {
//             for(auto excl : excluded)
//             {
//                 if(excl == word) found = true;
//             }
//         }
//         if (found)
//         {
//             continue;
//         }
//         else if (!found)
//         {
//             for(auto dict : dictionary)
//             {
//                 if(dict == word) found = true;
//             }
//         }
//         if (found)
//         {
//             continue;
//         }
//         else if(!found)
//         {
//             string v;
//             v = word;

//             v.push_back(position);
//             //char temp = v.push_back(temp);
//         }

//     }
//     ostringstream out;
//     out << setw(3) <<  << position << word << endl;

// }

// template <typename T>
// vector <T> your_func()
// {
//     vector <T> your_vector;
//     return your_vector;
// };




// std::vector<WORD> spellCheck(std::istream& in, const std::vector<std::string>& dictionary, const std::vector<std::string>& excluded)
// {
//     char curr;
//     vector<string>results();

//     while (!in.eof())
//     {
//         pos_type currPos = static_cast<long long>(in.tellg());
//         //currPos2 = static_cast<long long> (in.tellg());

//         if (in.eof() && in.tellg() == -1) break;
//         in >> misspelledWord >> ws;

//         for (size_t i = 0; i < len; i++)
//         {
//             if (isalpha(misspelledWord.at(i)) && (!ispunct(misspelledWord.at(i))))
//             {
//                 misspelledWord.at(i) = tolower(misspelledWord.at(i));
//                 currPos = currPos + results;

//                 if (ispunct(misspelledWord.at(i)))
//                 {
//                     in.clear();
//                     break;
//                 }
//             }
//             if (found)
//             {
//                 currPos += results;
//                 continue;
//             }
//             else if (!found)
//             {

//                 for (size_t i = 0; i < len, i++)
//                 {
//                     if (excludedWord.at(i)) && (!ispunct(excludedWordsat(i)))
//                     {
//                         if (found) continue;
//                     }
//                     else if (!found)
//                     {
//                       if (dictionaryWord.at(i)) && (!ispunct(dictionaryWord.at(i)))
//                       {
//                             if (found && !misspelled) continue;
//                       }
//                       else if (!found)
//                       {
//                           results += dictionaryWord;
//                           return results;
//                       }
//                     }
//                 }

//             }
//         }


//     }

//     string word = curr;
//     string result;
//     result = word;
//     cout << result << word << curr;
//     string result = "to_string(\"results"\)" + " " to_String(word) + " " to_string(currPos) + " ";

//     //results = cout << string to_string(\"results"\) << misspelled << to_string(\"currPos"\);
//     // string word = word + currPos;
//     // results = stol("results") + vector<unsigned char>();
//     return result;


// }



// utilities
// string swapChars(string& str, int i)
// {
//   char tmp;
//   tmp = str[i];
//   str[i] = str[i+1];
//   str[i+1] = tmp;
//   return str;
// }

// SpellChecker::SpellChecker(istream& wordlistfile)
// {
//   // populate the alphabet array
//   for (int i = 0; i < ALPHABET_LENGTH; i++)
//   {
//       m_alphabet[i] = (char)(65 + i);
//   }

//   // local variable init
//   stringstream ss;
//   int wordlist_size;
//   string line;
//   string word;

//   // get the size of the wordlist and create a hash table of apporpriate size
//   getline(wordlistfile, line);
//   ss << line;
//   ss >> wordlist_size;
//   m_wordlist = new HashTable(wordlist_size);

//   // load words into the hashtable
//   while (getline(wordlistfile, line))
//   {
//       ss << line;
//       ss >> word;
//       transform(word.begin(), word.end(), word.begin(), ::toupper); // convert to upper case
//       m_wordlist->insert(word);
//   }
// }

// SpellChecker::~SpellChecker()
// {
//   delete m_wordlist;
// }


// void SpellChecker::swapAdjacent(string misspelling)
// {
//   for (int i = 0; i < misspelling.size() - 1; i++)
//   {
//       swapChars(misspelling, i);
//       if (m_wordlist->find(misspelling))
//           m_suggestions.push_back(misspelling);
//       swapChars(misspelling, i); // swap them back to original positions
//   }
// }

// void SpellChecker::insertChar(string misspelling)
// {
//   for (int i = 0; i < misspelling.size() + 1; i++)
//   {
//       for (int j = 0; j < ALPHABET_LENGTH; j++)
//       {
//           misspelling.insert(misspelling.begin()+i, m_alphabet[j]);
//           if (m_wordlist->find(misspelling))
//               m_suggestions.push_back(misspelling);
//           misspelling.erase(i, 1);
//       }
//   }
// }

// void SpellChecker::deleteChar(string misspelling)
// {
//   char orig;
//   for (int i = 0; i < misspelling.size(); i++)
//   {
//       orig = misspelling[i];
//       misspelling.erase(i, 1);
//       if (m_wordlist->find(misspelling))
//           m_suggestions.push_back(misspelling);
//       misspelling.insert(misspelling.begin()+i, orig);
//   }
// }

// void SpellChecker::replaceChar(string misspelling)
// {
//   char orig;
//   for (int i = 0; i < misspelling.size(); i++)
//   {
//       orig = misspelling[i];
//       for (int j = 0; j < ALPHABET_LENGTH; j++)
//       {
//           misspelling[i] = m_alphabet[j];
//           if (m_wordlist->find(misspelling))
//               m_suggestions.push_back(misspelling);
//       }
//       misspelling[i] = orig;
//   }
// }

// void SpellChecker::splitWord(string misspelling)
// {
//   string s1;
//   string s2;
//   for (int i = 1; i < misspelling.size(); i++)
//   {
//       s1 = misspelling.substr(0, i);
//       s2 = misspelling.substr(i, misspelling.size());
//       if (m_wordlist->find(s1) && m_wordlist->find(s2))
//           m_suggestions.push_back(s1 + " " + s2);
//   }
// }

// void SpellChecker::suggest(string misspelling)
// {
//   if (!m_suggestions.empty()) m_suggestions.clear(); // clear suggestions from previous misspellings
//   swapAdjacent(misspelling);
//   insertChar(misspelling);
//   deleteChar(misspelling);
//   replaceChar(misspelling);
//   splitWord(misspelling);
// }

// void SpellChecker::collectSuggestions() // sort and de-dup suggestions
// {
//   // sort suggestions
//   sort(m_suggestions.begin(), m_suggestions.end());

//   // remove duplicates
//   vector<int> dups;
//   for (vector<string>::size_type i = 0; i != m_suggestions.size() - 1; i++)
//   {
//       if (m_suggestions[i] == m_suggestions[i+1]) dups.push_back(i+1);
//   }
//   for (vector<int>::size_type i = 0; i != dups.size(); i++)
//   {
//       m_suggestions.erase(m_suggestions.begin()+ dups[i] - i);
//   }
// }

// void SpellChecker::outputSuggestions(string line, string misspelling, ostream& outf)
// {
//   this->collectSuggestions();

//   // output suggestions
//   outf << line << endl;
//   outf << "word not found: " << misspelling << endl;
//   outf << "perhaps you meant: " << endl;
//   for (vector<string>::iterator it = m_suggestions.begin(); it != m_suggestions.end(); ++it)
//   {
//       outf << *it << endl;
//   }
//   outf << endl;
// }

// void SpellChecker::spellCheck(istream& inf, ostream& outf)
// {
//   stringstream ss;
//   string line;
//   string word;

//   // spellcheck each word
//   while (getline(inf, line)) // while we have lines (paragraphs)
//   {
//       ss << line;
//       while (ss >> word) // while we have words in the line
//       {
//           transform(word.begin(), word.end(), word.begin(), ::toupper); // convert to upper case
//           if (!m_wordlist->find(word))
//           {
//               this->suggest(word);
//               this->outputSuggestions(line, word, outf);
//           }
//       }
//   }
// }



// string swapChars(string& str, int i)
// {
//   char tmp;
//   tmp = str[i];
//   str[i] = str[i+1];
//   str[i+1] = tmp;
//   return str;
// }

// SpellChecker::SpellChecker(istream& wordlistfile)
// {
//   // populate the alphabet array
//   for (int i = 0; i < ALPHABET_LENGTH; i++)
//   {
//       m_alphabet[i] = (char)(65 + i);
//   }

//   // local variable init
//   stringstream ss;
//   int wordlist_size;
//   string line;
//   string word;

//   // get the size of the wordlist and create a hash table of apporpriate size
//   getline(wordlistfile, line);
//   ss << line;
//   ss >> wordlist_size;
//   m_wordlist = new HashTable(wordlist_size);

//   // load words into the hashtable
//   while (getline(wordlistfile, line))
//   {
//       ss << line;
//       ss >> word;
//       transform(word.begin(), word.end(), word.begin(), ::toupper); // convert to upper case
//       m_wordlist->insert(word);
//   }
// }

// SpellChecker::~SpellChecker()
// {
//   delete m_wordlist;
// }


// void SpellChecker::swapAdjacent(string misspelling)
// {
//   for (int i = 0; i < misspelling.size() - 1; i++)
//   {
//       swapChars(misspelling, i);
//       if (m_wordlist->find(misspelling))
//           m_suggestions.push_back(misspelling);
//       swapChars(misspelling, i); // swap them back to original positions
//   }
// }

// void SpellChecker::insertChar(string misspelling)
// {
//   for (int i = 0; i < misspelling.size() + 1; i++)
//   {
//       for (int j = 0; j < ALPHABET_LENGTH; j++)
//       {
//           misspelling.insert(misspelling.begin()+i, m_alphabet[j]);
//           if (m_wordlist->find(misspelling))
//               m_suggestions.push_back(misspelling);
//           misspelling.erase(i, 1);
//       }
//   }
// }

// void SpellChecker::deleteChar(string misspelling)
// {
//   char orig;
//   for (int i = 0; i < misspelling.size(); i++)
//   {
//       orig = misspelling[i];
//       misspelling.erase(i, 1);
//       if (m_wordlist->find(misspelling))
//           m_suggestions.push_back(misspelling);
//       misspelling.insert(misspelling.begin()+i, orig);
//   }
// }

// void SpellChecker::replaceChar(string misspelling)
// {
//   char orig;
//   for (int i = 0; i < misspelling.size(); i++)
//   {
//       orig = misspelling[i];
//       for (int j = 0; j < ALPHABET_LENGTH; j++)
//       {
//           misspelling[i] = m_alphabet[j];
//           if (m_wordlist->find(misspelling))
//               m_suggestions.push_back(misspelling);
//       }
//       misspelling[i] = orig;
//   }
// }

// void SpellChecker::splitWord(string misspelling)
// {
//   string s1;
//   string s2;
//   for (int i = 1; i < misspelling.size(); i++)
//   {
//       s1 = misspelling.substr(0, i);
//       s2 = misspelling.substr(i, misspelling.size());
//       if (->find(s1) && m_wordlist->find(s2))
//           m_suggestions.push_back(s1 + " " + s2);
//   }
// }

// void SpellChecker::suggest(string misspelling)
// {
//   if (!m_suggestions.empty()) m_suggestions.clear(); // clear suggestions from previous misspellings
//   swapAdjacent(misspelling);
//   insertChar(misspelling);
//   deleteChar(misspelling);
//   replaceChar(misspelling);
//   splitWord(misspelling);
// }

// void SpellChecker::collectSuggestions() // sort and de-dup suggestions
// {
//   // sort suggestions
//   sort(m_suggestions.begin(), m_suggestions.end());

//   // remove duplicates
//   vector<int> dups;
//   for (vector<string>::size_type i = 0; i != m_suggestions.size() - 1; i++)
//   {
//       if (m_suggestions[i] == m_suggestions[i+1]) dups.push_back(i+1);
//   }
//   for (vector<int>::size_type i = 0; i != dups.size(); i++)
//   {
//       m_suggestions.erase(m_suggestions.begin()+ dups[i] - i);
//   }
// }

// void SpellChecker::outputSuggestions(string line, string misspelling, ostream& outf)
// {
//   this->collectSuggestions();

//   // output suggestions
//   outf << line << endl;
//   outf << "word not found: " << misspelling << endl;
//   outf << "perhaps you meant: " << endl;
//   for (vector<string>::iterator it = m_suggestions.begin(); it != m_suggestions.end(); ++it)
//   {
//       outf << *it << endl;
//   }
//   outf << endl;
// }

// void SpellChecker::spellCheck(istream& inf, ostream& outf)
// {
//   stringstream ss;
//   string line;
//   string word;

//   // spellcheck each word
//   while (getline(inf, line)) // while we have lines (paragraphs)
//   {
//       ss << line;
//       while (ss >> word) // while we have words in the line
//       {
//           transform(word.begin(), word.end(), word.begin(), ::toupper); // convert to upper case
//           if (!m_wordlist->find(word))
//           {
//               this->suggest(word);
//               this->outputSuggestions(line, word, outf);
//           }
//       }
//   }
// }


// vector<string> spellCheck(istream& in, const vector<string>& dictionary, const vector<string>& excluded)
// {
//     vector<WORD>results();
//     string misspelledWord;
//     size_t len = misspelledWord.length() - 1;
//     long long pos = -1;

//     while (in.eof())
//     {

//         if (pos == -1)
//         {
//             break;
//         }
//         in >> misspelledWord >> ws;

//         for (size_t i = 0; i < len; i++)
//         {
//             if (isalpha(misspelledWord.at(i)) && (!ispunct(misspelledWord.at(i))))
//             {
//                 misspelledWord.at(i) = tolower(misspelledWord.at(i));
//                 if (ispunct(misspelledWord.at(i)))
//                 {
//                     in.clear();
//                     break;
//                 }
//             }


//         }

//         // int start = 0;
//         // while (start < len)
//         // {
//         //     if (misspelledWord.at(start) == '!' || misspelledWord.at(start == ','))
//         //     {
//         //         start++;
//         //         // if (isdigit(word.at(start)))
//         //         // {
//         //         //     in.clear();
//         //         // }
//         //     }
//         //     else
//         //     {
//         //         break;
//         //     }
//         // }
//         // while (len > start)
//         // {
//         //     if (ispunct(word.at(len - 1)))
//         //         len--;
//         //     else
//         //         break;
//         // }
//         // if (len > start)
//         // {
//         //     word = word.substr(start, len - start);
//         //     continue;
//         // }

//         bool found = false;
//         for (size_t i = 0; i < len; i++)
//         {

//             if (results == misspelledWord)
//             {
//                 results += pos.push_back(pos);
//                 found = true;
//                 break;
//             }
//         }

//         do { // get user input
//                 cout << "n>> Please enter a sentence: ";
//                 getline(cin, userInput);
//                 cout << endl;
//                 // split each word from the string into individual words to check if
//                 // they are spelled correctly
//                 char* splitInput = strtok(const_cast<char*>(userInput.c_str()), DELIMITERS);
//                 int result;
//                 while (splitInput != NULL)
//                 {
//                  currWord = splitInput;
//                  currWord = tolower(currWord);
//                  result += spellCheck(hashTable, currWord);
//                  splitInput = strtok(NULL, DELIMITERS);
//                 }
//                 // display results
//                 if (result > 0)
//                 {
//                  cout << "Number of words spelled incorrectly: " << result << endl;
//                  result = 0;
//                 }
//                 // ask for more data
//                 char response;
//                 cout << "nDo you want to enter another word/sequence? (y/n): ";
//                 cin >> response;
//                 cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear the cin buffer
//             }while (toupper('response') == 'Y');

//         if (!found)
//         {
//             for (size_t j = 0; j < len; j++)
//             {
//                 if (excluded.at(j) == misspelledWord)
//                 {
//                     found = true;
//                     break;
//                 }
//             }
//         }
//         if(! found)
//         {
//             for(size_t i = 0; i < len; i++)
//             {
//                 if(dictionary.at(i) == misspelledWord)
//                 {
//                     found = true;
//                     break;
//                 }
//             }
//         }

//     if(! found)
//     {
//         WORD = results;
//         w.word = misspelledWord;

//     }
//      w.positions.push_back(pos);
//     result.push_back(w);
//     return result;

//     }
// }


/////////////// STUDENT TESTING ////////////////////
int main()
{
    cout << "Student testing" << endl;

    return 0;
}