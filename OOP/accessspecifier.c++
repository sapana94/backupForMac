#include<iostream>
using namespace std;
class Base{
    private:
    int x,y;
    protected:
     int y;
    public:
    int z;
};
class Derived:public Base{
    public:
    void getData(){
        cout<<"enter value of x,y and z"<<endl;
        cin>>x;
        cin>>y;
        cin>>z;

    }
};
int main()
{
    Derived d;
    d.getData();
    cout<<"value of x"<<d.x<<endl;
    cout<<"value of y"<<d.y<<endl;
    cout<<"value of z"<<d.z<<endl;
    return 0;
}

