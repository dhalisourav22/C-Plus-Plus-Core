#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,ans;
    cout<<"the equation is {a*b*c+d/c-b} \nhere,  1st= a\n       2nd= b \n       3rd= c\n       4th= d"<<endl;
    cout<<"enter the four values : ";
    cin>>a>>b>>c>>d;
    ans=a*b*c+d/c-b;
    cout<<"answer is : "<<ans;
}
