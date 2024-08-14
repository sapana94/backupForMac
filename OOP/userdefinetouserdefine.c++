#include<iostream>
using namespace std;
class map1{
    private:
    int feet,inch;
    public:
    map1();
    map1(float f,float i)
    {
        feet=f;
        inch=i;

    }
    void display(){
        cout<<"the feet is : "<<feet<<endl;
        cout<<"The inch is : "<<inch<<endl;
    }
};
class map2{
private:
float meter,centimeter;
public:
// map2();
map2(int m,int c){
    meter=m;
    centimeter=c;
}
operator map1();
};
int main(){
    map1 m1;
    map2 m2(8,7);
    m1=m2;
    m1.display();
    return 0;
}
map2::operator map1()
{
    float f;
    int i;
    f=meter*3.3;
    i=centimeter*0.4;
    f=f+(i/12);
    i=i%12;
    return map1(f,i);

}