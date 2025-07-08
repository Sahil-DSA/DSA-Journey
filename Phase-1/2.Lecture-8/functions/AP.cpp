// write a program for AP= 3*n+7.
#include<iostream>
using namespace std;
int ap(int x){
    for(int i=1;i<=x;i++){
        cout<<(3*i+7)<<" ";
    }
    return 0;
}
int main(){
    int nth_term;
    cout<<"Enter the nth term => ";
    cin>>nth_term;
  ap(nth_term);
    return 0;
}