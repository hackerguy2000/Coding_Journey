#include<stdio.h>

int main(){
int a=23;
int *ptr=&a;
if(ptr!=NULL)
{
    printf("The address of the pointer is :::%d\n", ptr);
}
else{
    printf("The pointer can not be dereferenced as it is a NULL pointer now");
}
return 0;

}