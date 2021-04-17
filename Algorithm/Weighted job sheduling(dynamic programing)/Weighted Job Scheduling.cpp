#include<bits/stdc++.h>
using namespace std;
struct job{  //array er vitore ei koyta item ana jate dot diye sob acces kora jay
    int start, finish, profit,acc_profit ;
    string name,acc_name;
};
bool compare(job a,job b){   //kiser vitti te sort korbo. ar < ei  simbol er mane accendring order ar > etar mane dessendring order
    return(a.finish<b.finish);
}

int main(){
    int n,max_profit,c;
    string job_to_do;
    cout<<"How many job you want to scheduling : ";
    cin>>n;
    job arr[n];
    for(int i=0; i<n; i++){   // input nilam
        cout<<"\nGive name for "<<i+1<<" no job  : ";
        cin>>arr[i].name;
        cout<<"Give start for "<<arr[i].name<<" job    : ";
        cin>>arr[i].start;
        cout<<"Give finish for "<<arr[i].name<<" job   : ";
        cin>>arr[i].finish;
        cout<<"Give profit for "<<arr[i].name<<" job   : ";
        cin>>arr[i].profit;
    }
    for(int i=0; i<n; i++){ // calculation er jonno acc dewa gulo te o same man nilam
        arr[i].acc_profit = arr[i].profit;
        arr[i].acc_name = arr[i].name;
    }
    sort(arr, arr+n,compare);  //array ta ke sort korlam, ar sort korle nam pltay na. eta just biltin function ja sort kore dey
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j].finish<=arr[i].start){
                if(arr[j].acc_profit+arr[i].profit > arr[i].acc_profit)
                    arr[i].acc_profit = arr[j].acc_profit+arr[i].profit;  //oi profitre er man ta add kore kore rakhlam acc_profit er ghore
                    arr[i].acc_name = arr[j].acc_name+arr[i].name;       //oi job er nam gulo alada ekta variable e add kore rekhe dilam
            }
        }
    }
    max_profit = arr[0].acc_profit;
    for(int i=0; i<n; i++){
        if(arr[i].acc_profit>max_profit){
            max_profit = arr[i].acc_profit;   //maximum profit ta ber korar jonno kora
            c = i;    // jate bojha jay jekon indexe maxcimum value ta apeyechi. tar index ta mone rakhar jonno.
        }
    }
    cout<<"\nThe maximum profit is : "<<max_profit<<endl;
    cout<<"job to do : "<<arr[c].acc_name;

    /*for( int i=(n-1); i>=0; i--){   //problem
        if(arr[i].acc_profit = max_profit){
                max_profit = max_profit - arr[i].profit;
                cout<<arr[i].name<<", ";
        }
    }*/

    /*for(int i=0 ; i<n; i++){   //Showing final table(name & value)
        cout<<"Name is: "<<arr[i].name<<endl;
        cout<<"prof is: "<<arr[i].acc_profit<<endl;
    }*/

}
