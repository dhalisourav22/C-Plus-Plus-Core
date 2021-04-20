#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[] = "sourav dhali";
    char name2[12];                       //size must be initialized.
    strcpy(name2,name);
    cout<< name2;
}
