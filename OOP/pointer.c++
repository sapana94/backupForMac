// Stores the address of any other variable
// We have to know
// 1.pass by value
// 2.pass by refernce
// 2.pass by pointer

// #include<iostream>
// using namespace std;
// void swap(int a,int b)
// {
// int temp=a;
// a=b;
// b=temp;
// }
// int main()
// {
//     int x=10,y=20;
//     swap(x,y);
//     cout<<"x"<<x<<"y"<<y<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int x=5,y=10;
    cout<<"before swap"<<x<<"before swap"<<y<<endl;
    swap(x,y);
    cout<<"after swap"<<x<<"after"<<y<<endl;
    return 0;
}
