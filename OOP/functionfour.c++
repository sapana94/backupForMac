#include<iostream>
using namespace std;
int sum(int a,int b){
    return(a+b);
}
int divi(int a,int b)
{
return(a/b);
}
int sub(int a,int b)
{
return(a-b);
}
int mult(int a,int b)
{
return(a*b);
}
int choice()
{
    int a;
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"enter 2 for substraction"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cout<<"enter 4 for division"<<endl;
    cout<<"enter 5 for exit"<<endl;
    cin>>a;
    return a;


}
int main()
{
    int a,b;
    int c=choice();
    cout<<"enter two numbers to operate: "<<endl;
    cin>>a>>b;
    if(c==1)
    cout<<"the sum is"<<sum(a,b)<<endl;
    if(c==4)
    cout<<"the divi is"<<divi(a,b)<<endl;
    if (c==2)
    cout<<"the sub is"<<sub(a,b)<<endl;
    if(c==3)
    cout<<"the mult is"<<mult(a,b)<<endl;
    if(c==5)
    {
        exit(0);
    }



}
