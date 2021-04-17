#include<iostream>
using namespace std;
int main()
{
    int arr[6]={337, 340, 354, 356, 357, 351};
    int *p = arr,i,roll;
    cout<<"Enter your roll number : ";
    cin>>roll;
    for(i=0 ; i<6 ; i++)
    {
        if( *p==roll )
        {
            cout<<"You are in the list ."<<endl;
            break;
        }
        else if(i == 5)
        {
            cout<<"You are not in the list ."<<endl;
        }
        *p++;
    }
}
