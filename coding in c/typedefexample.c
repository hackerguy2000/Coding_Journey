#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    std s1,s2,s3;//variable under main only can accessable in main
    s1.id=121;
    s2.id=125;
    s3.id=154;
    printf("The id of s1:::%d\n",s1.id);
    printf("The id of s2:::%d\n",s2.id);
    printf("The id of s3:::%d\n",s3.id);
    // int *a, b;
    typedef int* intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;
    printf("The address of c is:::%d\n",a);
    printf("The address of c is:::%d",b);
    return 0;
}