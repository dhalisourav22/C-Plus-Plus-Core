
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    student()
    {
        cout<<"abijit is a good boy"<<endl;
    }
    student(int x , double y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout<<"ID is  : "<<id<<endl<<"GPA is : "<<gpa<<endl<<endl;
    }

};
int main()
{
    student abhijit , sabuj(335 , 3.78) , sourav(337 , 3.75);
    sourav.display();
    sabuj.display();

    getch();
}

