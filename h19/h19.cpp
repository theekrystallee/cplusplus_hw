/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h11.cpp
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


#include<string.h>
int main(int argc,char **arg)
{
FILE *fp;//it is pointer to input file

char str[80];//it will store input txt word
char str2[80];//it will store dictionary word
FILE *dictionary;//it is pointer to dictionary file
int check;//it will check if word is found it is set to 1 otherwise it is zero
if (arg == NULL)//it will check whether command line input is given
{
printf("no argumet is given");
return 0;
}
fp = fopen(arg[1],"r");//open the input file

if(fp==NULL)
{
printf("Input file is not found");
return 0;
}
/*open the dictionary file. the dictionary is in download folder u can add dictionary file in any folder and write the path name like */
dictionary = fopen("Downloads/dictionary.txt","r");
if(dictionary==NULL)
{
printf("dictionary file is not found");
return 0;
}

check = 0;
printf("Misspelled words in %s\n",arg[1]);
while(!feof(fp))
{
fgets(str,79,fp);//read input word
while(!feof(dictionary)&&(check==0))//loop will untill either dictionary is finished or word is found
{
fgets(str2,79,dictionary);//read dictionary word
if (strcmp(str,str2)==0)//compare words
{
check=1;// if word is found it is set to 1
}
}
if (check==0)
printf("%s",str);//print the misspelt words
else
{

check=0;//reset the check
}
rewind(dictionary);//reset the dictionary file pointer

}
//close both file
fclose(dictionary);
fclose(fp);
return 0;
}



// void fillVector(vector<int> &v)

// {

//      //Prompt the user to enter the elements to the vector

//      cout << "Enter the numbers into the vector(0 to stop)\n";

//      int num;

//           //Create a sentinel control loop to read the values to

// //the vector

//           do

//           {

//             cout << "Enter input: ";

//             cin >> num;

//             //Do not include 0 into the vector

//             if(num!=0) v.push_back(num);

//           } while (num != 0);//Read the input until 0

// }

// //Create a search method to search the value in the vector

// unsigned search(const vector<int> &v, int val)

// {

//      unsigned status;

//     if (std::find(v.begin(), v.end(), val))
//     {
//         status = val;
//     }
//     else
//     {
//       status = val;
//     }

//      //Return the position of the value if found, otherwise

// //return UINT_MAX

//      return status;

// }

// //Create a method remove() to remove the element into the vector

// void remove(vector<int> &v, unsigned index) {

// std::vector<int>::iterator position =std::find(v.begin(), v.end(), index[0];

//      if (position != v.end())

// // == myVector.end() means the element was not found

//           //Erase the element from the vector

//           v.erase(position);

// }

// //Create a method display() to display the vector

// void display(const vector<int> &v)

// {
//     size_t len = v.size();

//      for (size_t i = 0; i < len; i++)

//      {

//           cout << v[i] << " ";

//      }

//      cout << "\n" << endl;

// }

//Program starts with the main method

// int main()

// {

//      //Create a vector v and an integer variable value

//      vector<int> v;

//      int value;

//      //Call the fillVector(0 method to fill the vector

//      fillVector(v);

//      //Display the vector elements

//      display(v);

//      cout << "Enter value to search for: ";

//      cin >> value;

//      //search for the value in the vector

//      unsigned pos = search(v, value);

//      //Print the message whether the value is found or not

//      if (pos != UINT_MAX)

//      {

//           //cout << pos << endl;

//           cout << "Found: ";

//           //Remove the value from the vector

//           remove(v, pos);

//      }

//      else

//      {

//           //Display the value not found

//           cout << "NOT FOUND" << endl;

//      }

//      cout << "Result: ";

//      //Display the vector's values.

//      display(v);

//      cout << endl;

//      system("pause");

//      //main() method returns 0

//      return 0;

// }//END main


// #define CAPACITY 100

/**
* Struct for holding the word and the count
*/
// struct words
// {
//   string word;
//   int count;
// };

/**
* function to get the file name from the user and then open the file
*/
// bool openFile(ifstream &infile)
// {
//   string inputFile;
//   cout<<"Enter the input file name: ";
//   cin>>inputFile;
//   infile.open(inputFile);
//   if(!infile.good())
//   {
//       cout<<"Either the file is not available or is locked by another program\n";
//       return false;
//   }
//   else return true;
// }

// /**
// * increments the counter for the word by 1
// */
// void increment(struct words &word)
// {
//   word.count++;
// }

// /**
// * swaps two structs of words
// */
// void swap(struct words &word1, struct words &word2)
// {
//   struct words temp = word1;
//   word1 = word2;
//   word2 = temp;
// }

// /**
// * sorts the words in ASCII order
// */
// void sort(struct words wordArray[], int &size)
// {
//   for(int m=0; m<size; m++)
//   {
//       for(int n=0; n<size; n++)
//       {
//           if(wordArray[m].word.compare(wordArray[n].word) < 0)
//           {
//               swap(wordArray[m], wordArray[n]);
//           }
//       }
//   }
// }

// /**
// * checks the array for duplicate words
// */
// bool isDuplicate(struct words wordsArray[], int size, string word)
// {
//   for(int i=0; i<size; i++)
//   {
//       if(wordsArray[i].word == word)
//       {
//           increment(wordsArray[i]);
//           return true;
//       }
//   }
//   return false;
// }
// /*
// *processes the file and adds words into the array, if already available then increases the count of the word
// */
// void process(struct words wordsArray[], ifstream &infile)
// {
//   string line;
//   int counter = 0;
//   bool canBeAdded = true;
//   while(getline(infile,line ))
//   {
//       istringstream iss(line);
//       string word;
//       while(true)
//       {

//           if(!(iss>>word))
//           {
//               break;
//           }

//           if(!isDuplicate(wordsArray, counter, word) && canBeAdded)
//           {
//               wordsArray[counter].word = word;
//               wordsArray[counter].count = 1;
//               counter++;
//           }
//           if(counter==CAPACITY)
//           {
//               sort(wordsArray, counter);
//               canBeAdded = false;
//           }
//       }
//       if(canBeAdded)
//           sort(wordsArray, counter);
//   }
// }

// /**
// * prints the array to console
// */
// void printResult(struct words wordsArray[])
// {
//   cout<<"\nWord\t\t\t"<<"Count\t\t"<<"\n";
//   for(int i=0; i<CAPACITY; i++)
//   {
//       if(wordsArray[i].count != 0)
//       {
//           cout<<fixed<<setprecision(2);
//           string word = wordsArray[i].word;
//           while(word.length()<25)
//               word+= " ";
//           cout<<word<<to_string(wordsArray[i].count)<<endl;

//       }
//   }
// }


/**
// * main function
// */
// int main()
// {
//   ifstream in;
//   struct words wordsArray[CAPACITY];
//   openFile(in);
//   process(wordsArray, in);
//   printResult(wordsArray);
//   in.close();
// }


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


// using namespace std;

// // declaring iterator for hash_table

// typedef HashTable<string>::Iterator iterDec;

// // delimiters

// const char* DELIMITERS = " ,.-\':;?()+*/\\%$#!\"@\^&";

// // declaring hashtable size

// const int TABLE_SIZE = 29990;

// // function to check the spelling of given word

// int Spell_Check(HashTable<string>& hashTable, string word);

// // declaring function prototypes

// void Print_Table_Stats(HashTable<string>& hashTable);

// //function for lowercase conversion of words

// string To_Lower_Case(string word);

// int main()

// {

// // declare variables

// string filename;

// //getting user file for dictionary making

// cout<<"Enter the file name";

// cin>> filename;

// int result = 0;

// //variable for storing user inputted word

// string userInput;

// string currWord;

// clock_t beg; // required to time the hash_table load

// clock_t end; // required to time the hash_table load

// char response;

// // file pointer to handle file

// ifstream infile;

// HashTable<string> hashTable(TABLE_SIZE);

// // open the file containing dictionary word

// infile.open(filename);

// // check for the file existence, if it does not exist then EXIT

// if(infile.fail())

// {

// cout<<"**FATAL ERROR - Sorry the dictionary file inputed by you could not be found...\n";

// exit(1);

// }

// //throwing the processing caption

// cerr<<"PLEASE WAIT Dictionary is loading........\n";

// beg = clock(); // startING the timer

// // fetching the data from inputted file and putting into hash table

// while(infile >> currWord)

// {

// // avoiding duplicate words from entering the table

// if(!hashTable.Count(currWord))

// {//inserting the current new word into dictionary

// hashTable.Insert(currWord);

// }

// }

// //closing the file for safe working

// infile.close();

// //this function can be used for many stats related to hash table

// end = clock()-beg; // ending the timer

// cout<<"Your Dictionary has been loaded in "<<

// (double)end / ((double)CLOCKS_PER_SEC)<<" secs!";

// //showing the time in which we have created the dictonary

// // creating the line separator

// cout<<endl;

// cout.fill('-');

// //filling the whole line with '-'

// cout<<left<<setw(50)<<""<<endl;

// do{ // getting user input for words/sentences

// cout<<" Please enter a sentence/word: ";

// getline(cin,userInput);

// //storing the user input

// cout<<endl;

// // breaking the sentence into individual words for checking spelling of each

// char* splitInput = strtok(const_cast<char*>(userInput.c_str()),DELIMITERS);

// while(splitInput!=NULL)

// {//spilliting the words

// currWord = splitInput;

// //conversion of words to lower case

// currWord = To_Lower_Case(currWord);

// result += Spell_Check(hashTable,currWord);

// splitInput = strtok(NULL,DELIMITERS);

// }

// // displaying results

// if(result > 0)

// {//showing the number of words which are misspelled

// cout<<"Number of words spelled incorrectly: "<<result<<endl;

// result = 0;

// }

// // ask for more data

// cout<<"Do you want to enter few another sentence/words? (y/quit): ";

// //recording the user response

// cin >> response;

// cin.ignore(numeric_limits<streamsize>::max(),'\n'); // clear the cin buffer

// }while(toupper(response)=='Y');

// cout<<"BYE the dictionary exits!!n";

// return 0;

// }// end of main

// int Spell_Check(HashTable<string>& hashTable, string word)

// {//declaring variables

// int result = 0;

// int suggestions = 0;

// //declaring string array of size 256 words

// string remove[256];

// int numRemove=0;

// //if hashtable have words then

// if(!hashTable.Count(word))

// {

// ++result;

// cout<<"** "<<word<<": ";

// // checking for alteration & insertion in word

// for(unsigned x = 0; x < word.length(); ++x)

// {

// string alteration = word;

// for(char c = 'a'; c <= 'z'; ++c)

// {

// //if a alphabet is altered with another alphabet

// alteration[x] = c;

// if(hashTable.Count(alteration))

// {

// cout<<alteration<<", ";

// remove[numRemove++] = alteration;

// ++suggestions;

// // removing the entries so that every entry is present only once

// hashTable.Remove(alteration);

// }

// // checking for insertion

// string insertion = word.substr(0, x) + c + word.substr(x);

// //if insertion found

// if(hashTable.Count(insertion))

// {

// cout<<insertion<<", ";

// //removing that insertion

// remove[numRemove++] = insertion;

// ++suggestions;

// // remove the entry is unique not multiple times

// hashTable.Remove(insertion);

// }

// }

// }

// // checking for adjacent swapping (transposition) & deletion

// for(unsigned c = 0; c < word.length()-1;++c)

// {

// // transposition

// string transposition = word.substr(0,c) + word[c+1] + word[c] + word.substr(c+2);

// if(hashTable.Count(transposition))

// {

// cout<<transposition<<", ";

// remove[numRemove++] = transposition;

// ++suggestions;

// // remove the entry so it isnt displayed multiple times

// hashTable.Remove(transposition);

// }

// // checking for deletion

// string deletion = word.substr(0, c)+ word.substr(c + 1);

// //if deletion found then

// if(hashTable.Count(deletion))

// {

// cout<<deletion<<", ";

// //recording that deletion

// remove[numRemove++] = deletion;

// ++suggestions;

// // remove the entry to avoid multiple apperance

// hashTable.Remove(deletion);

// }

// }

// // placing the removed items back into the hashtable

// while(numRemove>=0)

// {//inserting item

// hashTable.Insert(remove[numRemove--]);

// }

// //if no suggestions are found

// if(suggestions< 1)

// {

// cout<<"Sorry No spelling suggestion found...";

// }

// cout<<endl<<endl;

// }

// //returniing the spell check result

// return result;

// }// end of Spell_Check

// //function for conversion of word string to lower case

// string To_Lower_Case(string word)

// {//converting everyword to its lowercase

// for(unsigned c = 0; c < word.length(); ++c)

// {//using tolower functio for lower case conversion

// word[c] = tolower(word[c]);

// }

// //returning the lowercase word

// return word;

// }// end of To_Lower_Case

// OUTPUT;

// code exe Entcr thc Filc nanciii.txt PLEASE AIT Dictionary is loading Your Dictionary has heen loaded in 1.101 子ccs! Help Plca// IF YOU HAVE ANY DOUBTS IN SOLUTION YOU MAY ASK AND PLEASE GIVE YOUR VALUABLE FEEDBACK
// // IF YOU FEEL MY GUIDANCE TO BE HELPFUL DO PRESS THE THUMB UP BUTTON

// //hashtable.h

// #ifndef TEMPLATE_HASH_TABLE

// #define TEMPLATE_HASH_TABLE

// #include <iostream>

// #include <string>

// #include <sstream>

// #include <cstdlib>

// // if user doesnt define, this is the

// // default hash table size

// const int HASH_SIZE = 100;

// template <class ItemType>

// class HashTable

// {

// public:

// HashTable(int hashSze = HASH_SIZE);

// /* Function: Constructor initializes hash table

// Precondition: None

// Postcondition: Defines private variables */

// bool IsEmpty(int key);

// /* Function: Determines whether hash table is empty at the given key

// Precondition: Hash table has been created

// Postcondition: The function = true if the hash table is empty and the

// function = false if hash table is not empty */

// bool IsFull();

// /* Function: Determines whether hash table is full

// Precondition: Hash table has been created

// Postcondition: The function = true if the hash table is full and the

// function = false if hash table is not full */

// int Hash(ItemType newItem);

// /* Function: Computes and returns a unique hash key for a given item

// The returned key is the given cell where the item resides

// Precondition: Hash table has been created and is not full

// Postcondition: The hash key is returned */

// void Insert(ItemType newItem);

// /* Function: Adds newItem to the back of the list at a given key in the hash table

// A unique hash key is automatically generated for each newItem

// Precondition: Hash table has been created and is not full

// Postcondition: Item is in the hash table */

// void Append(int key, ItemType newItem);

// /* Function: Adds new item to the end of the list at a given

// key in the hash table

// Precondition: Hash table has been created and is not full

// Postcondition: Item is in the hash table */

// bool Remove(ItemType deleteItem, int key = -1);

// /* Function: Removes the first instance from the table whose value is "deleteItem"

// Optional second parameter indicates the key where deleteItem is located

// Precondition: Hash table has been created and is not empty

// Postcondition: The function = true if deleteItem is found and the

// function = false if deleteItem is not found */

// void Sort(int key);

// /* Function: Sort the items in the table at the given key

// Precondition: Hash table has been initialized

// Postcondition: The hash table is sorted */

// int TableSize();

// /* Function: Return the size of the hash table

// Precondition: Hash table has been initialized

// Postcondition: The size of the hash table is returned */

// int TotalElems();

// /* Function: Return the total number of elements contained in the hash table

// Precondition: Hash table has been initialized

// Postcondition: The size of the hash table is returned */

// int BucketSize(int key);

// /* Function: Return the number of items contained in the hash table

// cell at the given key

// Precondition: Hash table has been initialized

// Postcondition: The size of the given key cell is returned */

// int Count(ItemType searchItem);

// /* Function: Return the number of times searchItem appears in the table.

// Only works on items located in their correctly hashed cells

// Precondition: Hash table has been initialized

// Postcondition: The number of times searchItem appears in the table is returned */

// void MakeEmpty();

// /* Function: Initializes hash table to an empty state

// Precondition: Hash table has been created

// Postcondition: Hash table no longer exists */

// ~HashTable();

// /* Function: Removes the hash table

// Precondition: Hash table has been declared

// Postcondition: Hash table no longer exists */

// // -- ITERATOR CLASS --

// class Iterator;

// /* Function: Class declaration to the iterator

// Precondition: Hash table has been declared

// Postcondition: Hash Iterator has been declared */

// Iterator begin(int key){return(!IsEmpty(key)) ? head[key]:NULL;}

// /* Function: Returns the beginning of the current hash cell list

// Precondition: Hash table has been declared

// Postcondition: Hash cell has been returned to the Iterator */

// Iterator end(int key=0){return NULL;}

// /* Function: Returns the end of the current hash cell list

// Precondition: Hash table has been declared

// Postcondition: Hash cell has been returned to the Iterator */

// private:

// struct node

// {

// ItemType currentItem;

// node* next;

// };

// node** head; // array of linked list declaration - front of each hash table cell

// int hashSize; // the size of the hash table (how many cells it has)

// int totElems; // holds the total number of elements in the entire table

// int* bucketSize; // holds the total number of elems in each specific hash table cell

// };

// //========================= Implementation ================================//

// template<class ItemType>

// HashTable<ItemType>::HashTable(int hashSze)

// {

// hashSize = hashSze;

// head = new node*[hashSize];

// bucketSize = new int[hashSize];

// for(int x=0; x < hashSize; ++x)

// {

// head[x] = NULL;

// bucketSize[x] = 0;

// }

// totElems = 0;

// }/* End of HashTable */

// template<class ItemType>

// bool HashTable<ItemType>::IsEmpty(int key)

// {

// if(key >=0 && key < hashSize)

// {

// return head[key] == NULL;

// }

// return true;

// }/* End of IsEmpty */

// template<class ItemType>

// bool HashTable<ItemType>::IsFull()

// {

// try

// {

// node* location = new node;

// delete location;

// return false;

// }

// catch(std::bad_alloc&)

// {

// return true;

// }

// }/* End of IsFull */

// template<class ItemType>

// int HashTable<ItemType>::Hash(ItemType newItem)

// {

// long h = 19937;

// std::stringstream convert;

// // convert the parameter to a string using "stringstream" which is done

// // so we can hash multiple datatypes using only one function

// convert << newItem;

// std::string temp = convert.str();

// for(unsigned x=0; x < temp.length(); ++x)

// {

// h = (h << 6) ^ (h >> 26) ^ temp[x];

// }

// return abs(h % hashSize);

// } /* End of Hash */

// template<class ItemType>

// void HashTable<ItemType>::Insert(ItemType newItem)

// {

// if(IsFull())

// {

// //std::cout<<"nINSERT ERROR - HASH TABLE FULLn";

// }

// else

// {

// int key = Hash(newItem);

// Append(key,newItem);

// }

// }/* End of Insert */

// template<class ItemType>

// void HashTable<ItemType>::Append(int key, ItemType newItem)

// {

// if(IsFull())

// {

// //std::cout<<"nAPPEND ERROR - HASH TABLE FULLn";

// }

// else

// {

// node* newNode = new node; // adds new node

// newNode-> currentItem = newItem;

// newNode-> next = NULL;

// if(IsEmpty(key))

// {

// head[key] = newNode;

// }

// else

// {

// node* tempPtr = head[key];

// while(tempPtr-> next != NULL)

// {

// tempPtr = tempPtr-> next;

// }

// tempPtr-> next = newNode;

// }

// ++bucketSize[key];

// ++totElems;

// }

// }/* End of Append */

// template<class ItemType>

// bool HashTable<ItemType>::Remove(ItemType deleteItem, int key)

// {

// bool isFound = false;

// node* tempPtr;

// if(key == -1)

// {

// key = Hash(deleteItem);

// }

// if(IsEmpty(key))

// {

// //std::cout<<"nREMOVE ERROR - HASH TABLE EMPTYn";

// }

// else if(head[key]->currentItem == deleteItem)

// {

// tempPtr = head[key];

// head[key] = head[key]-> next;

// delete tempPtr;

// --totElems;

// --bucketSize[key];

// isFound = true;

// }

// else

// {

// for(tempPtr = head[key];tempPtr->next!=NULL;tempPtr=tempPtr->next)

// {

// if(tempPtr->next->currentItem == deleteItem)

// {

// node* deleteNode = tempPtr->next;

// tempPtr-> next = tempPtr-> next-> next;

// delete deleteNode;

// isFound = true;

// --totElems;

// --bucketSize[key];

// break;

// }

// }

// }

// return isFound;

// }/* End of Remove */

// template<class ItemType>

// void HashTable<ItemType>::Sort(int key)

// {

// if(IsEmpty(key))

// {

// //std::cout<<"nSORT ERROR - HASH TABLE EMPTYn";

// }

// else

// {

// int listSize = BucketSize(key);

// bool sorted = false;

// do{

// sorted = true;

// int x = 0;

// for(node* tempPtr = head[key];

// tempPtr->next!=NULL && x < listSize-1;

// tempPtr=tempPtr->next,++x)

// {

// if(tempPtr-> currentItem > tempPtr->next->currentItem)

// {

// ItemType temp = tempPtr-> currentItem;

// tempPtr-> currentItem = tempPtr->next->currentItem;

// tempPtr->next->currentItem = temp;

// sorted = false;

// }

// }

// --listSize;

// }while(!sorted);

// }

// }/* End of Sort */

// template<class ItemType>

// int HashTable<ItemType>::TableSize()

// {

// return hashSize;

// }/* End of TableSize */

// template<class ItemType>

// int HashTable<ItemType>::TotalElems()

// {

// return totElems;

// }/* End of TotalElems */

// template<class ItemType>

// int HashTable<ItemType>::BucketSize(int key)

// {

// return(!IsEmpty(key)) ? bucketSize[key]:0;

// }/* End of BucketSize */

// template<class ItemType>

// int HashTable<ItemType>::Count(ItemType searchItem)

// {

// int key = Hash(searchItem);

// int search = 0;

// if(IsEmpty(key))

// {

// //std::cout<<"nCOUNT ERROR - HASH TABLE EMPTYn";

// }

// else

// {

// for(node* tempPtr = head[key];tempPtr!=NULL;tempPtr=tempPtr->next)

// {

// if(tempPtr->currentItem == searchItem)

// {

// ++search;

// }

// }

// }

// return search;

// }/* End of Count */

// template<class ItemType>

// void HashTable<ItemType>::MakeEmpty()

// {

// totElems = 0;

// for(int x=0; x < hashSize; ++x)

// {

// if(!IsEmpty(x))

// {

// //std::cout << "Destroying nodes ...n";

// while(!IsEmpty(x))

// {

// node* temp = head[x];

// //std::cout << temp-> currentItem <<std::endl;

// head[x] = head[x]-> next;

// delete temp;

// }

// }

// bucketSize[x] = 0;

// }

// }/* End of MakeEmpty */

// template<class ItemType>

// HashTable<ItemType>::~HashTable()

// {

// MakeEmpty();

// delete[] head;

// delete[] bucketSize;

// }/* End of ~HashTable */

// // END OF THE HASH TABLE CLASS

// // -----------------------------------------------------------

// // START OF THE HASH TABLE ITERATOR CLASS

// template <class ItemType>

// class HashTable<ItemType>::Iterator :

// public std::iterator<std::forward_iterator_tag,ItemType>,

// public HashTable<ItemType>

// {

// public:

// // Iterator constructor

// Iterator(node* otherIter = NULL)

// {

// itHead = otherIter;

// }

// ~Iterator() {}

// // The assignment and relational operators are straightforward

// Iterator& operator=(const Iterator& other)

// {

// itHead = other.itHead;

// return(*this);

// }

// bool operator==(const Iterator& other)const

// {

// return itHead == other.itHead;

// }

// bool operator!=(const Iterator& other)const

// {

// return itHead != other.itHead;

// }

// bool operator<(const Iterator& other)const

// {

// return itHead < other.itHead;

// }

// bool operator>(const Iterator& other)const

// {

// return other.itHead < itHead;

// }

// bool operator<=(const Iterator& other)const

// {

// return (!(other.itHead < itHead));

// }

// bool operator>=(const Iterator& other)const

// {

// return (!(itHead < other.itHead));

// }

// // Update my state such that I refer to the next element in the

// // HashTable.

// Iterator operator+(int incr)

// {

// node* temp = itHead;

// for(int x=0; x < incr && temp!= NULL; ++x)

// {

// temp = temp->next;

// }

// return temp;

// }

// Iterator operator+=(int incr)

// {

// for(int x=0; x < incr && itHead!= NULL; ++x)

// {

// itHead = itHead->next;

// }

// return itHead;

// }

// Iterator& operator++() // pre increment

// {

// if(itHead != NULL)

// {

// itHead = itHead->next;

// }

// return(*this);

// }

// Iterator operator++(int) // post increment

// {

// node* temp = itHead;

// this->operator++();

// return temp;

// }

// ItemType& operator[](int incr)

// {

// // Return "junk" data

// // to prevent the program from crashing

// if(itHead == NULL || (*this + incr) == NULL)

// {

// return junk;

// }

// return(*(*this + incr));

// }

// // Return a reference to the value in the node. I do this instead

// // of returning by value so a caller can update the value in the

// // node directly.

// ItemType& operator*()

// {

// // Return "junk" data

// // to prevent the program from crashing

// if(itHead == NULL)

// {

// return junk;

// }

// return itHead->currentItem;

// }

// ItemType* operator->()

// {

// return(&**this);

// }

// private:

// node* itHead;

// ItemType junk;

// };

// #endif




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
int run()
{
    cout << "Student testing" << endl;

    return 0;
}