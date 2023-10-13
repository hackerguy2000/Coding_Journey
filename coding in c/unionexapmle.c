#include<stdio.h>
#include<string.h>
 union student {
 int id;
 int roll_num;
 long long int phn;
 char address[25];
 char fav_char;
 int marks;
}s1,s2,s3;


void main()
{
 s1.id=101;
 s1.phn=9163157143;
 strcpy(s1.address,"chandannagar");
 printf("The student id of s1 is:%d\n",s1.id);
  printf("The student phn number of s1 is:%d\n",s1.phn);
 printf("The student address of s1 is:%s\n",s1.address);


//bcz through union at a time only one data type can access the memory . this is good for less memory to be used in a proper memory manage,ent manner   

}