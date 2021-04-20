#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name1[]="Sourav", name2[]="sourav";
    int value = strcmp(name1,name2);
    if(value==0)
        cout<<"they are equal.";
    else
        cout<<"they are not equal.";
}
