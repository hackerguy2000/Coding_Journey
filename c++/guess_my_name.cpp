#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[] = "Rahul Shaw";
    char guess[25];
    do
    {
        cout << "Guess my name!!" << endl;
        gets(guess);

    } while (strcmp(name, guess) != 0);
    cout<<"you have guessed it correctly!!"<<endl;

    return 0;
}