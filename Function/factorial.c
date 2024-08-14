#include<stdio.h>
int fact(int n)
{
    if(n<0)
    {
        printf("number not be integer");
        return 1;
    }
    else if(n==0)
    {return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int a;
    printf("enetr the number");
    scanf("%d",&a);
    printf("%d is fact",fact(a));
    return 0;
}

