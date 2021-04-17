#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Give the number : ";
    cin>>n;
    int num[n+1];
    for( i = 2; i<=n; i++){
         num[i]= i;
    }
    cout<<"1 ";
    for(i =2 ; i<=n ; i++){
        if( num[i] != 0 ){
            cout<<i<<" ";
            int j = i*i;
            while( j<= n ){
                num [j]=0;
                j= j+i;
            }
        }
    }
}
