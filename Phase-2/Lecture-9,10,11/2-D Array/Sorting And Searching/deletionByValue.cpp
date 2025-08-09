#include<iostream>
using namespace std;
void print(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100],size;
    cout<<"Enter the size of array => ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element on index ["<<i<<"] => ";
        cin>>arr[i];
    }
    print(arr,size);
    // Deletion by value 
    int value;
    cout<<"Enter the value, want to delete => ";
    cin>>value;
    int ind;
    bool found=false;
    // finding location of value in index
    for(int i=0;i<size;i++){
      if(arr[i]==value){
        ind=i;
        found = true;
        break;
      }
    }
    if(!found){
        cout<<"Element not found!";
    }
    else{
    // Left shift of array 
    for(int i=ind;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    print(arr,size);
}
    return 0;
}