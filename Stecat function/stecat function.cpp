#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char first_name[10],second_name[10];
    cout<<"Enter your first name : ";
    cin>>first_name;
    cout<<"Enter your second name : ";
    cin>>second_name;

    strcat(first_name,second_name);
    cout<<first_name;


}
