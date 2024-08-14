#include<iostream>
using namespace std;
int cube(int a)
{
    return(a*a*a);
}
int main()
{
    int a;
    cout<<"enter the integer"<<endl;
    cin>>a;
    cout<<"the cube is"<<cube(a)<<endl;
    return 0;
}
