#include<iostream>
using namespace std;
class Test{
    private:
    int x;
    int y;
    public:
    int y;
    void getdata()
    {
        cout<<"Enter x and y"<<endl;
        cin>>x>>y;
    }
};
int main()
{
    Test t;
    t.getdata();
    cout<<"enter the value of x"<<endl;
    cin>>t.x;
    cout<<"enter the value of y"<<endl;
    cin>>t.y;
}   