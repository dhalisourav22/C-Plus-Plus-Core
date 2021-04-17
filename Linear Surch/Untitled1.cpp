#include<iostream>
using namespace std;
int main()
{
    int ls[]={10,25,45,12,36,45,68,4,5,775,41,52,78,745,452};
    cout<<"Enter a value which position we wanted to know : ";
    int value;
    cin >>value;
    int po=-1;
    for(int i=0; i<15; i++)
    {
        if(value == ls[i])
        {
            po=i+1;
            break;
        }
    }
    if(po==-1)
        cout<<value<< " dose not match with any student. ";
    else
        cout<<value<< " matches with any student. position is : "<<po;
}
