#include<iostream>
using namespace std;
class student
{
private :
    string name;
public  :
    int id;
    float cgpa;
    student(int y, float z, string x)
    {
        id=y;
        cgpa=z;
        name=x;
        display();
    }
    void display()
    {
        cout<<"ID is   : "<<id<<endl;
        cout<<"NAME is : "<<name<<endl;
        cout<<"GPA is  : "<<cgpa<<endl<<endl;
    }
};
int main()
{
    student s1(337,3.75,"Sourav"),s2(335,2.25,"Rohit"),s3(348,3.98,"shihab");
}
