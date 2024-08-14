#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enetr any three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c)
    {
        printf("a is the largest");
    }
    else if(b>a&&b>c)
    {
        printf("b is the largest");
    }
    else{
        printf("c is the largest");
    }
}