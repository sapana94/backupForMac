#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    char name[20];
    static int count_student;
    public:
    Student(){};
    void getdata(){
        cout<<"Enter the name and rollno"<<endl;
        cin>>name>>rollno;
        count_student++;
    }
        static void displaycount()
        {
            cout<<"count"<<count_student<<endl;
        }
    };
    int Student::count_student=0;
    int main(){
        Student S1,S2,S3;
        S1.getdata();
        S1.displaycount();

        S2.getdata();
        S2.displaycount();

        S3.getdata();
        S3.displaycount(); 

       // S1.displaycount();
        //S2.displaycount();
       // S3.displaycount();
        return 0;
    }