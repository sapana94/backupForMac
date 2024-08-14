#include<iostream>
using namespace std;
class polygon{
    protected:
    int width,breadth;
    public:
    void setdata(int h,int b){
        h=width;
        b=breadth;
    }
};
class rectangle:public polygon{
    public:
    int area(){
        return width*breadth;
    }
};
class Triangle:public polygon{
    public:
    int area(){
        return (width*breadth)*0.5;
    }
};
int main(){
    polygon *p1,*p2;
    rectangle rect;
    Triangle tri;
    p1=&rect;
    p2=&tri;
    p1->setdata(5,3);
    p2->setdata(7,8);
    cout<<rect.area();
    cout<<tri.area();
    return 0;
}