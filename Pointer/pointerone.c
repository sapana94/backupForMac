#include<stdio.h>
int main()
{
    int a;
    int *ptr;
    ptr = &a;
    *ptr = 0;
    printf("value of a: %d\n", a);
    printf("value of *ptr: %d\n", *ptr);
    *ptr += 5;
    printf("value of a: %d\n", a);
    printf("value of *ptr: %d\n", *ptr);
    // *ptr += 5;
    

    return 0;
}