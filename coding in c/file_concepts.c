#include<stdio.h>

int main()
{
FILE *ptr=NULL;
ptr=fopen("myfile.txt", "r");
char chr=fgetc(ptr);
printf("The character I read on 1st time is::%c\n",chr);
chr=fgetc(ptr);
printf("The character I read on 2nd time is::%c\n",chr);      //the printf is done after calling the function again in 9th line
chr=fgetc(ptr);
printf("The character I read on 3rd time is::%c\n",chr);
chr=fgetc(ptr);
printf("The character I read on 4th time is::%c\n",chr);
fclose(ptr);
return 0;


}