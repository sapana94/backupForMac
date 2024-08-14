#include <iostream>

using namespace std;
// class Distance
// {
// private:
//     int feet, inch;

// public:
//     Distance() {}
//     Distance(int f, int i)
//     {
//         feet = f;
//         inch = i;
//     }
//     void adddistance(Distance d1, Distance d2)
//     {
//         feet = d1.feet + d2.feet;
//         inch = d1.inch + d2.inch;
//         feet = feet + (inch / 12);
//         inch = inch % 12;
//     }
//     void display()
//     {
//         cout << "Feet: " << feet << " Inch: " << inch << endl;
//     }
// };
// int main()
// {
//     Distance d1(10, 6), d2(5, 8), d3;
//     d3.adddistance(d1, d2);
//     d3.display();
// }



//second program

class Rectangle
{
    private:
    int length, breadth;
    public:
    Rectangle();
    Rectangle(int l, int b);
    void operator++(int);
    void display();
};
int main()
{
    int l, b;
    cout<<"Enter the length and breadth of the rectangle: ";
    cin>>l>>b;
    Rectangle r1(l,b),r2(l,b);
    r1++;
    r1.display();
    return 0;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
 void Rectangle ::operator++(int)
{
    length++;
    breadth++;

}
void Rectangle :: display(){
    cout<<"Length: "<<length<<" Breadth: "<<breadth<<endl;
}