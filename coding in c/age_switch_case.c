#include<stdio.h>
void main()
{
int age,marks;
printf("enter your age:");
scanf("%d", &age);
printf("enter your marks\n:");
scanf("%d", &marks);
switch(age)
{
case 18 :
printf("Your age is 18,\nyou are now an adult");
switch(marks)
{
    case 50:
    printf("\nYour marks are 50");
    break;

    default:
    printf("\nyour marks are not 50");
}
break;
case 60 :
printf("Your age is 60, \nYou are now a senior citizen");
break;
default:
printf("\nYour age is not 18 or 60");
break;
}
return 0;
}