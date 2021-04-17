#include<bits/stdc++.h>
using namespace std;
class student
{
    int id;
    float cgpa;
public:
    string name;
    student(int x, float y, string z)
    {
        id = x;
        cgpa = y;
        name = z;
    }
    student(student &s1)
    {
        id = s1.id;
        cgpa = s1.cgpa;
        name = s1.name;
    }
    void display()
    {
        cout<<"ID is   :  "<<id<<endl;
        cout<<"CGPA is :  "<<cgpa<<endl;
        cout<<"NAME is :  "<<name<<endl;
    }
};
int main()
{
    student s1(10,3.25,"supti");
    s1.display();
    student s2 = s1;
    s2.display();
}
