#include <stdio.h>
int main()
{
    char Maritial_Status, Gender;
    int age;
    printf("Enter the Maritial status and Gender and age::\n");
    scanf("%c%c", &Maritial_Status, &Gender);
    printf("enter the age::");
    scanf("%d",&age);

    if (Maritial_Status == 'M')
    {
        printf("Insured guranteed\n");
    }
    if (Maritial_Status == 'U' && Gender == 'm' && age > 30)
    {
        printf("Insured\n");
    }

    if (Maritial_Status == 'U' && Gender == 'f' && age > 25)
    {
        printf("INSURED\n");
    }
    

    return 0;
}
