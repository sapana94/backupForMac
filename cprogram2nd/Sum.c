#include<stdio.h>
void main()
{
    int n,a,b,sum;
    printf("enter the number");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    sum=a+b;
    printf("%d+%d=%d",a,b,sum);
}