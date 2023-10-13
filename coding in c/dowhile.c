#include<stdio.h>
void main()
{
    int num,index=0;
    printf("Enter the number:");
    scanf("%d", &num);
    
    do{
      index=index+1;
      printf("%d\n", index);
    }while(index<num);
return 0;
}