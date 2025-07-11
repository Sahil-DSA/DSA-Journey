#include<iostream>
using namespace std;
int main(){
    int arr[212],size,num,count=0;
    cout<<"Enter the size => ";
    cin>>size;
     cout<<"Enter the number => ";
    cin>>num;
    for(int i=0;i<size;i++){
        cout<<"Enter the element => ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
            if(arr[i]+arr[j]+arr[k]==num){
            count++;
            }
        }
    }
    }
    cout<<"Pair => "<<count;
}