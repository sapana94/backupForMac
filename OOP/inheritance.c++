#include<iostream>
using namespace std;
class Animal{
    public:
    void eat();
    void sleep();
};
class Dog:public Animal{
    public:
    void Bark();
};
void Animal::eat()
{
    cout<<"Aniaml eats"<<endl;
}
void Animal::sleep()
{
    cout<<"Animal sleep"<<endl;
}
void Dog::Bark()
{
    cout<<"Dog barks"<<endl;
}
int main()
{
    Dog d1;
    d1.Bark();
    d1.eat();//execessive feature of parents
    d1.sleep();
    return 0;
}


//forms of inheritamce
//1.single
//multiple
//multilevel
//hiererchica1
//hybrid






//labsheet4

#include<iostream>
using namespace std;
Class vehicle{
    public:
    vehicle();
};
Class Car::public vehicle{
    cout<<"this is car"<<endl;
};

};
vehicle::vehicle(){
    cout<<"this is the vehicle"<<endl;
};

