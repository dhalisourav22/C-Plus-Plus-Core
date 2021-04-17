#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num_1, num_2;

    cout<<"PLease enter two integer uumber : ";
    cin>>num_1>>num_2;

    cout<<fixed;
    cout<<setprecision(2);


    int sum= num_1+num_2;
    cout<<setw(20)<<"additoon is : "<<sum<<endl;

    int sub= num_1-num_2;
    cout<<setw(20)<<"Subtitution is : "<<sub<<endl;

    int mul= num_1*num_2;
    cout<<setw(20)<<"Multification is : "<<mul<<endl;

    double div= (float)num_1/num_2;
    cout<<setw(20)<<"Divition is : "<<div<<endl;

    return 0;


}

