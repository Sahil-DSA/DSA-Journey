#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int size;
    cout<<"Enter the size of array => ";
    cin>>size;
    // Selection sort 
    arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on index ["<<i<<"] => ";
        cin>>arr[i];
    }
       for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int s=0;
    for(int j=0;j<size;j++){
    s=j;
        for(int i=j+1;i<size;i++){
            if(arr[s]>arr[i]){
                s=i;
            }
        }
        int temp=arr[j];
        arr[j]=arr[s];
        arr[s]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}