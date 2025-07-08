#include<iostream>
using namespace std;
int fact(int x){
    int y=1;
    for(int i=1;i<=x;i++){
        y=i*y;
    }
    return y;
}
int main(){
    int n,r;
    cout<<"Enter the value of n => ";
    cin>>n;
    cout<<"Enter the value of r => ";
    cin>>r;
    int combination = fact(n)/(fact(n-r)*fact(r));
    cout<<"\nTHE NUMBER OF COMBINATIONS => "<<combination;
}