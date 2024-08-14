#include<stdio.h>
int add(int a,int b,int c,int d)
{
    return(a+b+c+d);
}
int main()
{
    int a,b,c,d;
    printf("enter the numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum=add(a,b,c,d);
    printf("%d is sum",sum);
    return 0;
}

