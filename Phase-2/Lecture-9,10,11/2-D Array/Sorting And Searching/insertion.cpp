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
    // Insertion 
    int element;
    cout<<"Enter the new element => ";
    cin>>element;
    int position;
    cout<<"Enter the index number , where to insert => ";
    cin>>position;
    // Right shift of array from postion
    for(int i=size;i>=position;i--){
       arr[i]=arr[i-1];
    }
    arr[position]=element;
    size++;
    print(arr,size);
    return 0;
}