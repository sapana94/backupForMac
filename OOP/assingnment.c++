#include<iostream>
using namespace std;
class student
{
    int mark1,mark2;
    public:
    student(int,int);
    ~student();
    void operator=(student);
    void display();

};
int main()
{
    student s1(10,20),s2(40,30);
    s1=s2;
    s1.display();

}
 student::student(int a,int b)
{
    mark1=a;
    mark2=b;
}
void student::display()
{
cout<<"the marks of one sub is"<<mark1<<endl;
    cout<<"the marks of sec sub is"<<mark2<<endl;
}
student::~student(){
cout<<"-------------"<<endl;
}
void student:: operator=(student s2){
mark1=s2.mark1;
mark2=s2.mark2;
}