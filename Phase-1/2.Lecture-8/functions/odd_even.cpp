#include<iostream>
using namespace std;
    bool is_Odd(int num){
        return (num&1);// bool only take 0 as false and all non zero wheter it is -ve or +ve take as true.
    }
     bool is_Even(int num){
        return !(num&1);//beacuse of bool type it automatically convert int return to "true" and "false".
    }
int  main(){
    int num;
    cout<<"Enter teh number => ";
    cin>>num;
    if(is_Odd(num)){
        cout<<"The number is odd!"<<endl;
    }
    else{
        cout<<"The number is even!"<<endl;
    }
        if(is_Even(num)){
        cout<<"The number is even!";
    }
    else{
        cout<<"The number is odd!";
    }
    return 0;
}