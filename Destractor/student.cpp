#include "student.h"
#include<iostream>
using namespace std;
student::student()
{
    cout<<"constructor is called"<<endl;
}

student::~student()
{
    cout<<"destructor is called"<<endl;
}
void student :: display()
{
    cout<<"display is called"<<endl;
}
