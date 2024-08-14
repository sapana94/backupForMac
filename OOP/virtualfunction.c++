#include<iostream>
using namespace std;
class base{
    public:
    virtual void showdata()=0;
    //{
       // cout<<"base class"<<endl; 
    //}
};
class derived:public base{
    public:
    void showdata(){
        cout<<"Derived class"<<endl;
        }
        };
        int main(){
            base *b;
            derived d;
            b=&d;
            b->showdata();
            return 0;
        }
    
