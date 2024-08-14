#include<iostream>
using namespace std;
class shape{
    protected:
    int height,width;
    public:
    shape(int h,int w){
        height=h;
        width=w;
    }
};
class rectangle:public shape{
    public:
    rectangle(int h,int w):shape(h,w){

    }
 int area();
};
int main(){
    rectangle R(10,5);
    R.area();
    return 0;
}
int rectangle::area(){
    return height*width;
}

