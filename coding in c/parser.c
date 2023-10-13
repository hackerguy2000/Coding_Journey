#include <stdio.h>
#include <string.h>

void parser(char str[])
{
  int j;

  for (j = 0; j < strlen(str); j++)
  {
    if (str[j] == ' ')

    {
      printf("The string is :::%s\n", str[j]);
    }
    else if (str[j] != ' ')
    {
      continue;
    }
  }
}

int main()
{

  char str[99] = "<h1> This is a Heading </h1>";
  parser(str);

  return 0;
}