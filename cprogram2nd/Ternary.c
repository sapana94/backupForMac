#include<stdio.h>
void main ()
{
    char gender;
    printf("enter the character");
    scanf(" %c",&gender);
    (gender=='M') ? printf("Male \n"):(gender=='F') ? printf("Female") : printf("others");
     

}