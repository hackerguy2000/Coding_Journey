// C++ program to count words in
// a string using stringstream.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(string str)
{
    // Breaking input into word
    // using string stream

    // Used for breaking words
    stringstream s(str);

    // To store individual words
    string word;

    int count = 0;
    while (s >> word)
        count++;

    return count;
}
string *parsing(string s, int *count)
{
    stringstream ss(s);
    string word;
    static string arr[100];
    int i = 0;
    while (getline(ss, word, ','))
    {
        arr[i] == word;
        cout << word << endl;
        i++;
    }
    *count = i;

    return arr; // arr[0]
}

// Driver code
int main()
{
    int var;
    string s = "Rahul, is ,a, great, guy, but, he, needs, time, to learn ,anything";
    cout << " Number of words are: " << countWords(s) << endl;
    string *ptr;
    cout << "after parsing the string , the string will look like::" << endl;
    ptr = parsing(s, &var);
    cout << var;

    return 0;
}