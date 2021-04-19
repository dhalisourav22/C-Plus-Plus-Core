#include<iostream>
using namespace std;
class a
{
    int id;
    string  name;
public:
    void setvalue(int x, string y)
    {
        id = x;
        name = y;
    }
    friend class b;
};
class b
{
    float cgpa;
public:
    void setvalue2(float z){ cgpa = z;}
    void display( a ob )
    {
        cout<<"ID is   : "<<ob.id<<endl;
        cout<<"NAME is : "<<ob.name<<endl;
        cout<<"CGPA is : "<<cgpa<<endl;
    }
};
int main ()
{
    a ob1;
    b ob2;
    ob2.setvalue2( 3.75 );
    ob1.setvalue(337,"Sourav");
    ob2.display(ob1);
}
