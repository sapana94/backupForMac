#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int,int);
    int Area();
};
int main(){
  Rectangle R1,R2(5,2);
  Rectangle *R3=new Rectangle();
  Rectangle *R4=new Rectangle(5,2);
  cout<<R3->Area()<<endl;
  cout<<R4->Area()<<endl;
  return 0;
}
int Area();
int Rectangle::Area(){
    return length*breadth;
}
Rectangle::Rectangle(){
    length=4;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
  length=l;
  breadth=b;
}
