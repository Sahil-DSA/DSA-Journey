#include<iostream>
using namespace std;
int main(){
    int a[6];
    for(int i=0;i<=5;i++){
    int v=1+i;
        cout<<"Enter the "<<v<<" element => ";
        cin>>a[i];
    }
    cout<<"arr => {";
    for(int i=0; i<6;i++){
        cout<<a[i]<<",";
    }
    cout<<"\b}";
    return 0;
}