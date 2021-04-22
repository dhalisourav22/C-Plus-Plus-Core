#include<iostream>
using namespace std;
int main()
{
    int num_1, num_2;

    cout<<"PLease enter two integer uumber : ";
    cin>>num_1>>num_2;

    int sum= num_1+num_2;
    cout<<"additoon is : "<<sum<<endl;

    int sub= num_1-num_2;
    cout<<"Subtitution is : "<<sub<<endl;

    int mul= num_1*num_2;
    cout<<"Multification is : "<<mul<<endl;

    double div= (float)num_1/num_2;
    cout<<"Divition is : "<<div<<endl;

    return 0;


}
