#include<iostream>
using namespace std;
class Time{
    private:
    int hrs,minu;
    public:
    Time();
    Time(int,int);
    operator int();
};
int main(){
   int hrs,minu,duration;
   cout<<"enter the hours"<<endl;
   cin>>hrs;
   cout<<"enter the minutes"<<endl;
   cin>>minu;
   Time t1(hrs,minu);
   duration=t1;
   cout<<"Duration is"<<duration<<endl;
   return 0;
}


Time::Time(){
};
Time::Time(int h,int m){
hrs=h;
minu=m;
};
Time::operator int(){
    return(hrs*60+minu);
}
