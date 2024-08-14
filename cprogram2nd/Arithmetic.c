#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter any two number: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d is the sum",c);
    c=a-b;
    printf("%d is the difference",c);
    c=a*b;
    printf("%d is the product",c);
    c=a/b;
    printf("%d is the quotient",c);
    c=a%b;
    printf("%d is the remainder",c);
}

//     printf("enter the value of b");
//     scanf("%d", &b);
//     c = a + b;
//     d = a - b;
//     e = a * b;
//     f = a / b;
//     g = a % b;
//     printf("%d", c);
//     printf("%d", d);
//     printf("%d", e);
//     printf("%d", f);
//     printf("%d", g);
// }