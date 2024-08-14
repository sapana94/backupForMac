#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number of array"<<endl;
    cin>>a;
    int n[a];
    int temp;
    cout<<"enter 5 number:"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>n[i];
    }
    cout<<"before swapping:"<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<n[i]<<"";
    }
    temp=n[0];
    n[0]=n[a-1];
    n[a-1]=temp;
    cout<<endl<<"after swapping:"<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<n[i]<<"";
    }
    return 0;
}




