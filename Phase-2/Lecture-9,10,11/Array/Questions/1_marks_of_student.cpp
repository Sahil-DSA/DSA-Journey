#include<iostream>
using namespace std;
int main(){
    int size,marks[100];
    cout<<"Enter the size of array => ";
    cin>>size;
     marks[size];
    for(int i=0;i<size;i++){
        int a=1+i;
        cout<<"Enter the marks of roll number "<<a<< " => ";
        cin>>marks[i];
    }
    cout<<"Roll numers of stundents having marks less than 35 => ";
    for(int i=0;i<size;i++){
        int a=1+i;
        if(marks[i]<35){
            cout<<a<<" ";
        }
    }
    return 0;
}