#include<stdio.h>
struct student
 {
     int id;
     int marks;
     int fav_char;
 };
/*data type has been formed*/
struct student s1,s2,s3; //like int a,b,c declaring like that particularly 

int main()
{

int y=s1.id=11225;//id of s1 student is declared with the help of structure (user defined data type)
s1.marks=75;
s1.fav_char=5;
printf("the value of y is:::%d",y);
return 0;
}