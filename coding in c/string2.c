#include<stdio.h>
#include<string.h>

void main()
{
 char str1[]="Rahul";
 char str2[]="Shaw";
 char str3[20];
 strcpy(str3,strcat(str1,str2));
 puts(str3);
 //puts(strcat(str1,str2));
 puts(strcpy(str1,str2)); 
 printf("The length of the first string is::%d\n",strlen(str1));
 printf("The reverse of the second string is ::%s",strrev(str2));
 



}
