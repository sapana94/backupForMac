#include<stdio.h>
// #include<string.h>
void main()
{
   char y;
   int b;
printf("enter the characterer");
scanf(" %c",&y);
printf("enter the value age");
scanf("%d",&b);
if(y=='a' )
printf("is a nepali citizen");
if(b>=18)
{
    printf("eligible to liscence ");
}
else{
    printf("not elegible");
}
}