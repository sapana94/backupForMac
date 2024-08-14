#include <stdio.h>
#include <stdio.h>
void swap(int *a, int *b)
{
    int *temp;
    temp = a;
    a = b;
    b = temp;
    printf("s  a=%d b=%d \t", *a, *b);
}
void main()
{
    int a = 5, b = 6;
    swap(&a, &b);
    printf(" a= %d and b=%d", a, b);
}
