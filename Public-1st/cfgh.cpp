#include <iostream>
using namespace std;
class room
{
public:
    string name;
    int cost,amount;

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Cost: "<<cost<<endl;
        cout<<"Amount: "<<amount<<endl;
    }

};
int main()
{
    room chair,table,mouse,pc,book;

    chair.name = "Chair";
    chair.cost = 600;
    chair.amount = 5;

    table.name = "Table";
    table.cost = 1000;
    table.amount = 4;

    book.name = "Book";
    book.cost = 250;
    book.amount = 15;

    table.display();
    cout<<endl;
    chair.display();

    //cout<<"Name: "<<book.name<<endl<<"Cost: "<<book.cost<<endl;

    return 0;
}
