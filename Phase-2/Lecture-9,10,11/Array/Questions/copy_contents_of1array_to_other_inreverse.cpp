#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array => ";
    cin>>size;
    int arr_1[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index => ";
        cin>>arr_1[i];
    }
    int arr_2[size];
    // for(int k=0;k<size;k++){
    //     for(int j=0;j<size;j++){
    //          arr_2[j]=arr_1[k];
    //         }
    //     }
    // }
    // -------------------------OR---------
       for(int k=0;k<size;k++){
        arr_2[k]=arr_1[(size-1)-k];
        }
        cout<<endl<<"2nd array is now => {";
    for(int i=0;i<size;i++){
        cout<<arr_2[i]<<",";
    }
    cout<<"\b}";
    return 0;
}