#include<stdio.h>

int func()
{
    return 0;
}

int main()
{
int sum;//as this is declared as a local value then it will be initialized with garbadge  value
printf("The sum is %d", sum);
return 0;

}