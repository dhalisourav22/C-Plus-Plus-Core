#include<iostream>
using namespace std;
class Balagurusamy
{
public:
    virtual void example()=0;
};
class c : public Balagurusamy
{
public:
    void example()
    {
        cout<<"C text book written by Balagurusamy."<<endl;
    }
};
class oops : public Balagurusamy
{
public:
    void example()
    {
        cout<<"C++ text book written by Balagurusamy."<<endl;
    }
};
int main()
{
    Balagurusamy *arra[2];
    c e1;
    oops e2;
    arra[0] = &e1;
    arra[1] = &e2;
    arra[0] -> example();
    arra[1] -> example();
}
