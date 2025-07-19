#include<iostream>
using namespace std;
int even_odd_index(int a[],int s){
    int even_sum=0,odd_sum=0;
    cout<<"The  array will be => {";
      for(int i=0;i<s;i++){
        if(i%2==0){
            even_sum=even_sum+a[i];
        }
        else{
           odd_sum=odd_sum+a[i];
        }
      }
      for(int i=0;i<s;i++){
        cout<<a[i]<<",";
      }
         cout<<"\b}\n";
         cout<<"The difference between the sum of elements at even index to the elements at odd => "<<even_sum-odd_sum;
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