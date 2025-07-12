#include<iostream>
#include<climits>
using namespace std;
int max_array(int a[],int s){
    int x=INT_MIN;    //here x = -2147483648 always as int min expands till -2147483647-1.
        int smax=INT_MIN;// here smax = -2147483648 always as int min expands till -2147483647-1.
    for(int i=0;i<s;i++){
        if(x<a[i]){
            smax=x;
           x=a[i];
        }
        else if(smax<a[i] && x!=a[i]){
            smax=a[i];
        }
    }
   cout<<"The second greatest element in the array is => "<<smax<<endl; 
    // ----------------OR---------------------------.
//     for(int i=0;i<s;i++){
//         if(a[i]!=x && smax<a[i]){       //the match turning point!
//             smax=a[i];
//         }
//     }
//     cout<<"The second largest element in the array is => "<<smax;
return 0;
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