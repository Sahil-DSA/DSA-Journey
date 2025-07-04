#include<iostream>
using namespace std;
int main(){
    int num,fact=0;
    cout<<"Enter the number => ";
    cin>>num;
    for(int i=2;i<num;i++){
        if( num%i==0){
        fact++;
        break;
         }
    }
    if(fact!=0){
        cout<<"Not prime";
    }
    else{
        cout<<"Prime ";
    }
    cout<<endl<<fact;
    return 0;
}