#include<iostream>
using namespace std;
int max_array(int a[],int s){
    int x=a[0];
    for(int i=0;i<s;i++){
        if(x<a[i])
        x=a[i];}
    cout<<"The greatest element in the array is => "<<x<<endl; }
int min_array(int a[],int s){
       int x=a[0];
    for(int i=0;i<s;i++){
        if(x>a[i])
        x=a[i];}
    cout<<"The smallest element in the array is => "<<x<<endl;}
int main(){
    int arr[567],size;
    cout<<"Enter the size of array => ";
    cin>>size;
    arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index => ";
        cin>>arr[i];}
    max_array(arr,size);
    min_array(arr,size);}