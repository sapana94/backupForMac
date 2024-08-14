//#include<iostream>
//using namespace std;
class Rectangle{
    private:
    int length,width;
    public:
    void setData(int l,int b)
    {
        length=l;
        width=b;
    }
    void showData(){
        cout<<"length: "<<length<<endl;
        cout<<"width: "<<width<<endl;
    }
    int area()
    {
        return(length*width);
    }   
    int perimeter()
    {
        return 2*(length+width);
    }
};
int main()
{
    Rectangle book, laptop, desk;
   // setter function
    book.setData(2,1);
    laptop.setData(3,2);
    desk.setData(5,2);
    //print data
    cout<<"Data of Book"<<endl;
    book.showData();
    cout<<"Data of laptop"<<endl;
    laptop.showData();
    cout<<"data of desk"<<endl;
    desk.showData();
    cout<<"Area of book"<<book.area()<<endl;
    cout<<"area of laptop"<<laptop.area()<<endl;
    cout<<"area of desk"<<desk.area()<<endl;

    cout<<"perimeter of book"<<book.perimeter()<<endl;
    cout<<"perimeter of laptop"<<laptop.perimeter()<<endl;
    cout<<"perimeter of desk"<<desk.perimeter()<<endl;
    return 0;
}





#include<iostream>
using namespace std;
class Rectangle{
    private:
    int length,width;
    public:
    void setData(int l,int b)
    {
        length=l;
        width=b;
    }
    void showData(){
        cout<<"length: "<<length<<endl;
        cout<<"width: "<<width<<endl;
    }
    int area()
    {
        return(length*width);
    }   
    int perimeter()
    {
        return 2*(length+width);
    }
};
int main()
{
    Rectangle book, laptop, desk;
   // setter function
    book.setData(2,1);
    laptop.setData(3,2);
    desk.setData(5,2);
    //print data
    cout<<"Data of Book"<<endl;
    book.showData();
    cout<<"Data of laptop"<<endl;
    laptop.showData();
    cout<<"data of desk"<<endl;
    desk.showData();
    cout<<"Area of book"<<book.area()<<endl;
    cout<<"area of laptop"<<laptop.area()<<endl;
    cout<<"area of desk"<<desk.area()<<endl;

    cout<<"perimeter of book"<<book.perimeter()<<endl;
    cout<<"perimeter of laptop"<<laptop.perimeter()<<endl;
    cout<<"perimeter of desk"<<desk.perimeter()<<endl;
    return 0;
}

