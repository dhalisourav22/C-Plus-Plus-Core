//header file decleration;
#include <iostream>
using namespace std;

//main function;
int main(){

    //variable declaration;
    double input1,input2;
    double weight1,weight2;
    double bias;

    //variable value initialization by taking user input;
    cout<<"Enter the input value for first dendrites : ";
    cin>>input1;
    cout<<"Enter the weight value for first dendrites : ";
    cin>>weight1;
    cout<<"Enter the input value for second dendrites :  ";
    cin>>input2;
    cout<<"Enter the weight value for second dendrites : ";
    cin>>weight2;
    cout<<"Enter the bias value : ";
    cin>>bias;

    //Getting single value by wighted sum(Kind Of a activation funcation);
    double singleValue = (input1*weight1)+(input2*weight2)+bias;

    //Create thereshold value for compare;
    double theresholdValue = 0;

    //For storing result;
    double labelValue = 0;


    //compare with thereshold for getting label output.
    if(singleValue <= theresholdValue){
        labelValue =0;
    }
    else{
        labelValue = 1;
    }

    //print answer.
    cout<<"The Label is : "<<labelValue;
}
