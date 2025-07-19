#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
          int temp =arr[i];
          arr[i]=arr[(size-1)-i];
          arr[(size-1)-i]=temp;
    }
    return;
}
int main(){
    int size;
    cout<<"Enter the size of array => ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index => ";
        cin>>arr[i];}
    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}