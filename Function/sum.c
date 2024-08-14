#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int c,d;
    printf("enter the numbers");
    scanf("%d%d",&c,&d);
    int result=sum(c,d);
    printf("%d is the sum",result);
}