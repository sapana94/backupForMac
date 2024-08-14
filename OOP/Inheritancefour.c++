// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//     vehicle();
// };
// class Car:: public vehicle
// {
//     public:
//         Car(){
//  cout<<"this is car"<<endl;
//     }
// };

// vehicle::vehicle(){
//     cout<<"this is the vehicle"<<endl;
// };

// int main()
// {
//     Carc;
//     return 0;
// }

//Labsheetfourkotwo

#include<iostream>
using namespace std;
class teacher{
    private:
    int id;
    char subject;
    public:
    void getteacher();
    void displayteacher();
};
class staff:public teacher{
    private:
    int id;
    char level;
    public:
    void getstaff();
    void displaystaff();
};
class coordinator:public teacher,public:staff{ 
    private:
    char program;
    public:
    void getdata();
    void displaydata();
};
int main()
{
    coordinator c1;
    c1.getTeacher();
    c1.getstaff();
    c1.getdata();

}


