#include<stdio.h>
void main()
{
    int a,b;
    char o;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    printf("enter operator");
    scanf(" %c" ,&o);
    switch(o)
    {
        case'+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'/':
        if(b!=0)
        {
        printf("%d",a/b);
        }
        else{
            printf("not divisible");
        }
        break;
        case'*':
        printf("%d",a*b);
        break;
        case'%':
        printf("%d",a%b);
        break;
        default:
        printf("+,-,/,*,% not selected");
    }
}     