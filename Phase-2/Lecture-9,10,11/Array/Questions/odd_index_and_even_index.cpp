#include<iostream>
using namespace std;
int even_odd_index(int a[],int s){
    cout<<"\nThe new array will be => {";
      for(int i=0;i<s;i++){
        if(i%2==0){
            a[i]+=10;
        }
        else{
            a[i]*=2;
        }
      }
      for(int i=0;i<s;i++){
        cout<<a[i]<<",";
      }
         cout<<"\b}";
      return 0;  
}
int main(){
    int size,arr[78];
    cout<<"Enter the size of arr => ";
    cin>>size;
    arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index number => ";
        cin>>arr[i];
    }
    even_odd_index(arr,size);
}