#include <iostream>
using namespace std;
int main(){
    int n,j,i;
    cout<<"How many number you want to enter : ";
    cin>>n;
    int arr[n];
    for( int i = 0; i<n; i ++){
        cout<<"Enter Number : ";
        cin>>arr[i];
    }
    for( i =0; i<n ; i++){
        int min = i;
        for( j= i+1; j<n ; j++){
            if(arr[j] < arr[i])
            {
                min = j;
            }
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        cout<<arr[i]<<" ";
    }
}
