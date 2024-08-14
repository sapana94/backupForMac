#include<stdio.h>
void sum(int a,int b)
{
    int c=a+b;
    printf("%d",c);
}
void main()
{
int a,b;
printf("enter the numbers");
scanf("%d%d",&a,&b);
 sum(a,b);
}

