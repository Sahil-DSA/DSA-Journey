#include<iostream>
using namespace std;
int max_array(int a[],int s){
    int x=a[0];
        int smax=a[0];
    for(int i=0;i<s;i++){
        if(x<a[i]){
 smax=x;
 x=a[i];
        }
    }
   cout<<"The second greatest element in the array is => "<<smax<<endl; 

//     for(int i=0;i<s;i++){
//         if(a[i]!=x && smax<a[i]){       //the match turning point!
//             smax=a[i];
//         }
//     }
//     cout<<"The second largest element in the array is => "<<smax;
}
int main(){
    int arr[567],size;
    cout<<"Enter the size of array => ";
    cin>>size;
    arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index => ";
        cin>>arr[i];}
    max_array(arr,size);
}