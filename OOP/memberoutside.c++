#include<iostream>
using namespace std;
class Rectangle{
    private:
   int length,breadth;
  public:
  Rectangle();
  Rectangle(int,int);
  Rectangle(Rectangle &);
  ~Rectangle(); //Destructor
  int Area();
 };
 int main()
 {
    Rectangle R1,R2(6,3),laptop(R2),plate=R1,plate2=R2;
    cout<<R1.Area()<<endl;
    cout<<R2.Area()<<endl;
    cout<<laptop.Area()<<endl;
    cout<<plate.Area()<<endl; //Default copy constructor
    cout<<plate2.Area()<<endl; //Default copy constructor

    return 0;
 }
 
 int Rectangle::Area(){
    return length*breadth;
 }
 Rectangle::Rectangle() //non parameterized
 {
    length=0;
    breadth=0;
 }
 Rectangle::Rectangle(int l,int b) //parametrized
 {
    length=l;
    breadth=b;
 }
 Rectangle::Rectangle(Rectangle &a) //copy constructor
 {
 length=a.length;
 breadth=a.breadth;
 }
Rectangle::~Rectangle(){
   cout<<"THE OBJECT IS DESTROYED"<<endl; 
}