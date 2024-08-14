#include<iostream>
using namespace std;
class Time{
    private:
    int hrs,minu;
    public:
    Time();
    Time(int);
    void display();
};
int main(){
    int Time,t1;
    cout<<"enter the time"<<endl;
    cin>>Time;
    t1.Time();
    return 0;
}
void Time::display(){
    cout<<"the hrs="<<hrs<<"the minu="<<minu<<endl;
}
Time::Time(){}
Time::Time(int t){
    hrs=t/60;
    minu=t%60;
}
