#include<iostream>
using namespace std;
int add(int a,int b)
{
    return(a+b);
}
int add(int a,int b,int c)
{
    return(a+b+c);
}
float add(int a,float b)
{
    return(a+b);
}
float add(float a,int b)
{

    return(a+b);
}

int main()
{
int x=10,y=20,z=30;
float m=5.7;
cout<<"sum of integer and integer"<<add(x,y)<<endl;
cout<<"sum of 3 integer"<<add(x,y,z)<<endl;
cout<<"sum of integer and float"<<add(x,m)<<endl;
cout<<"sum of float and integer"<<add(m,x)<<endl;
return 0;
}

