#include<stdio.h>
int main()
{
int number =10;
int *ptr = &number;
int _number = *ptr;
printf("%d is the value of number",_number);

// print the address of variable
printf("the address of variable is %u",&ptr);
printf("the value of pointer is %u",ptr);
}