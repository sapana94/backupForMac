#include<stdio.h>
void main()
{
    int marks,sum=0,avg;
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("enter the marks");
        scanf("%d",&a[i]);
        // sum=sum+marks;
        sum=sum+a[i];
    }
    // for(int i=0;i<5;i++)
    // {
        printf("the marks is %d\n",sum);
        avg=sum/5;
        printf("%d is the avg",avg);

    // }
}