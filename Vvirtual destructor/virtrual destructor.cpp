#include<iostream>
using namespace std;
class b
{
public:

    b()
    {
        cout<<"Constructors of base"<<endl;
    }
    virtual ~b()
    {
        cout<<"Destructors of base"<<endl;
    }
};
class d : public b
{
public:
    d()
    {
        cout<<"Constructors of derive"<<endl;
    }
    ~d()
    {
        cout<<"Destructors of derive"<<endl;
    }
};
int main()
{
    b *p = new d();
    delete p;
}
