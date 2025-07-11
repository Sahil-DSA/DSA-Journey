#include<iostream>
using namespace std;
int main(){
    int size,arr[78],count=0;
    float x;
    cout<<"Enter the size of arr => ";
    cin>>size;
     cout<<"Enter the number => ";
    cin>>x;
    arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index number => ";
        cin>>arr[i];
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"There are "<<count<<" elements in the array which are greater than "<<x<<endl;
    return 0;
    }