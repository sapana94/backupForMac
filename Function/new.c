#include<stdio.h>
 int factorialusingloop(int);
 int factorialusingrecursion(int);

 int main()
 {
     int n;
     printf("Enter a number to find factorial: ");
     scanf("%d", &n);

     int result1 = factorialusingloop(n);
     printf("Factorial of %d using loop is: %d\n", n, result1);

     int result2 = factorialusingrecursion(n);
        printf("Factorial of %d using recursion is: %d\n", n, result2);

        return 0;
 }

 int factorialusingloop(int n)
 {
    printf(". \n");
     int i, fact = 1;
     for (i = 1; i <= n; i++)
     {
         fact = fact * i;
     }
     return fact;
 }

    int factorialusingrecursion(int n)
    {
        if (n == 0)
            return 1;
        else
            return n * factorialusingrecursion(n - 1);
    }