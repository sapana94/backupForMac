// C++ program to demonstrate example of cascading count & cin.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    // without cascading count
    cout<<"Enter value of a and b :";
    // cascading cin
    cin>>a>>b;
    // cascading cout
    cout<<"A :"<<a <<",B:"<<b<<endl;
    return 0;
}