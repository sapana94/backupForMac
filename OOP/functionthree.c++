#include<iostream>
using namespace std;
int add(int c,int d,int e=1,int f=1)
{
    return c+d+e+f;
}
int main()
{
    int c=8,d=8;
    cout<<"sum of integer ="<<(c,d)<<endl;
    c+=2;
    d+=2;
    cout<<"sum of another ="<<(c,d)<<endl;
    c+=2;
    d+=2;
    cout<<"sum of next ="<<(c,d)<<endl;
    c+=2;
    d+=2;
}
