#include <stdio.h>
#include <stdlib.h>

struct myarray
{ // structure has been formed here..
    int total_size;
    int used_size;
    int *ptr;
};                                                        // structure which is a user defined data type, is defined here
void createArray(struct myarray *a, int tSize, int uSize) // structure pointer is passed like int* a pointer in a function to accept the argument to create an array
{                            // a is a struct pointer and its data will be accessed by arrow operator
    //(*a).total_size = tSize;
    //(*a).used_size = uSize;
   // (*a).ptr = (int *)malloc(tSize * sizeof(int));
    a->total_size=tSize;
    a->used_size=uSize;
    a->ptr=(int *)malloc(tsize * sizeof(int)); // as we can call the function's elements thorugh dot operation
    printf("The total size is ::%d\n", tSize);
    printf("The used size of the array:::%d\n", uSize);
}
void setVal(struct myarray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element at %d position ::\n", i);
        scanf("%d", &n);
        (a->ptr)[i]=n;//(*a).ptr[i]=n type logic is here
    }
}
void show(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("The elements are ::%d\n", (a->ptr)[i]);
    }
}
int main()
{
    struct myarray marks; // like int marks but here user defined datat type struct myarray marks
    createArray(&marks, 20, 3);
    setVal(&marks);
    show(&marks);

    return 0;
}