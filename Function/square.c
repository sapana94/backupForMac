#include<stdio.h>
int sq(int n)
{
    return n*n;
}
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d is square",sq(n));
}