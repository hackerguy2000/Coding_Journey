#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char arr[20];
  gets(arr);
  int len = strlen(arr);
  int freq[256] = {0};
  for (int i = 0; i < len; i++)
  {
    freq[arr[i]]++;
  }
  for (int i = 0; i < 256; i++)
  {
    if (freq[i] == 1)
    {
      cout << "The non repeating characters are:::" << (char)i << endl;
    }
    else if(freq[i]==2)
    {
      cout<<"The elements which are present in the string twice are:::"<<(char)i<<endl;
    }
  }

  return 0;
}