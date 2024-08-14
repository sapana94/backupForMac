#include<iostream>
using namespace std;
class A{
    protected:
    int adata;
    public:
    A(int a){
        adata=a;
    }
};
class B:public A
{
private:
int bdata;
public:
B(int a,int b):A(a){
    bdata=b;
}
void showdata(){
    cout<<"value of a="<<adata<<endl;
     cout<<"value of b="<<bdata<<endl;
}
};
int main(){
    B b(9,5);
    b.showdata();
    return 0;
}
