#include<iostream>
using namespace std;
int main(){
    int num;
    int a=1,b=0;
    cout<<"Enter the nth term => ";
    cin>>num;
    cout<<b<<" ";
    cout<<a<<" ";
    for(int i=3;i<=num;i++){
      int next_numb=a+b;
      cout<<next_numb<<" ";
      b=a;
      a=next_numb;
      
    }
    return 0;
}