#include<iostream>
using namespace std;
int fibonacci(int y){
    int a=0,b=1,nth;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=2;i<y;i++){
        nth=a+b;
        cout<<nth<<" ";
        a=b;
        b=nth;
    }
    return 0;
}
int main(){
    int x;
    cout<<"Enter the nth term => ";
    cin>>x;
    fibonacci(x);
    return 0;
}