#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private :
    string name;
public  :
    int id;
    float cgpa;
    void setname(string x)
    {
        name=x;
    }
    string getname()
    {
        return name;
    }
    void display()
    {
        cout<<"ID is   : "<<id<<endl;
        cout<<"NAME is : "<<getname()<<endl;  //cout<<"NAME is : "<<name<<endl;
        cout<<"GPA is  : "<<cgpa<<endl<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.setname("Sourav");
    s1.id = 336;
    s1.cgpa = 3.75;
    s2.setname("Sabuj");
    s2.id = 337;
    s2.cgpa = 3.71;
    s3.setname("Abhijit");
    s3.id = 339;
    s3.cgpa = 3.78;
    s1.display();
    s2.display();
    s3.display();
    getch();
}
