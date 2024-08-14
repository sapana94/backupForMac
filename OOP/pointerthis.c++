#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;
    public:
    Rectangle();
    Rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
    int Area();
};
int main()
{
        Rectangle R1,R2(3,1);
        cout<<R1.Area()<<endl;
        cout<<R2.Area()<<endl;
    }
    int Rectangle::Area()
    {
        return length*breadth;
    }
    Rectangle::Rectangle()
    {
        length=0;
        breadth=0;
    }