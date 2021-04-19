#include<iostream>
using namespace std;
class Base
{
public :
    void display(){cout<<"\n Display base";}
    virtual void show(){cout<<"\n show base";}
};
class Derived : public Base
{
public :
    void display(){cout<<"\n Display derived";}
    void show(){cout<<"\n show derived";}
};
int main()
{
    Base b;
    Derived d;
    Base *bptr;
    cout<<"\n bptr points to base.\n";
    bptr = &b;
    bptr -> display();      //calls Base version
    bptr -> show();         //calls Base version
    cout<<"\n bptr points to derived.\n";
    bptr = &d;
    bptr -> display();      //calls Base version
    bptr -> show();         //calls derived version
}
