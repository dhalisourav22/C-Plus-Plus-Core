#include<iostream>
using namespace std;

int main(){
    int first, second,m,n;
    cout<<" enter first number : ";
    cin>>first;
    cout<<"enter second number : ";
    cin>>second;
    if (first>second){
        m=first;
        n =second;
    }
    else{
        n=first;
        m =second;
    }
    if(m==0&&n==0)
        cout<<"GCD is : "<<m;
    else if(n==0)
        cout<<"GCD is : "<<m;
    int t = n;
    while(t>0 ){
            if(m%t == 0){
                if(n%t == 0){
                    cout<<"GCD is : "<<t;
                    break;
                }
            }
            t--;
    }
}
