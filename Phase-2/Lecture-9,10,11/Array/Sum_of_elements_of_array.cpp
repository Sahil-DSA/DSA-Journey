#include<iostream>
using namespace std;
int main(){
    int arr[567],size,sum=0;
    cout<<"Enter the size of array => ";
    cin>>size;
    arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index => ";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of all the elements of array is => "<<sum;
    return 0;
}