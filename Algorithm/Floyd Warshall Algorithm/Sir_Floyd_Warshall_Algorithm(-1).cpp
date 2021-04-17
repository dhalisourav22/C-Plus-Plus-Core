//Namee : Sourav Dhali
//ID : 11190120337(3B0

#include<bits/stdc++.h>
using namespace std;
int main(){   //main function start from here.
    //freopen("in.txt", "r", stdin);
    int n;
    cout<<"Enter the number of node : ";
    cin>>n;   //n define the number of node.
    int matrix[n][n];
    cout<<"Here infinity define by -1.\n";     //infinity define by -1
    for(int row=1; row<=n; row++){       //Taking Input from user.
        for( int col=1; col<=n; col++){
            cout<<"The direct path between "<<row<<" and "<<col<<" node is : ";
            cin>>matrix[row][col];
        }
    }


    for(int v=1; v<=n; v++){        //problem  //Here v means via node
        for(int row=1; row<=n; row++){
            for( int col=1; col<=n; col++){
                if(matrix[row][v] == -1 || matrix[v][col] == -1){

                }
                else
                {
                    if(matrix[row][col]==-1 || matrix[row][col]>(matrix[row][v]+ matrix[v][col])){
                        matrix[row][col]=(matrix[row][v]+ matrix[v][col]);
                    }
                }
            }
        }

    }
    cout<<"\nFinal Matrix is : "<<endl;    //Matrix view Output
    for(int row=1; row<=n; row++){
            cout<<"                 ";
        for( int col=1; col<=n; col++){
            cout<<matrix[row][col]<<"   ";
        }
        cout<<endl;
    }
    cout<<"\n\nThats mean : "<<endl;       //Path view Output
    for(int row=1; row<=n; row++){
        for( int col=1; col<=n; col++){
            cout<<"The shortest path between "<<row<<" and "<<" "<<col<<" is : ";
            cout<<matrix[row][col]<<endl;
        }
    }
}
