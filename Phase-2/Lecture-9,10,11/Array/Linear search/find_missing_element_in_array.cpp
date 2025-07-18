#include<iostream>
using namespace std;
int main(){
    int n,sum_1=0,sum_2=0,missing_element;
    cout<<"Enter the size of array => ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
      cout<<"Enter the element on "<<i<<" index => ";
      cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum_1=sum_1+arr[i];
    }
    sum_2=(n*(n+1))/2;
    missing_element=sum_2-sum_1;
    cout<<"Missing element is => "<<missing_element;
}