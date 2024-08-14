#include<stdio.h.>
void main()
{
    int y;
    printf("enter the year");
    scanf("%d",&y);
    if(y%4==0&&y%100!=0)
    {
        printf("year is leap year");
    // }
    // else if(y%100!=0)
    // {
    //     printf("year is not leap year");
    }
    else if(y%400==0)
    {
        printf("year is leap year");
    }
    else{
        printf("year is not leap year");
    }
}