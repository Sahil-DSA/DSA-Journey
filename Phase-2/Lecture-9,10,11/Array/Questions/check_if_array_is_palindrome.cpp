#include<iostream>
using namespace std;
int main(){
    int size,count=0;
    cout<<"Enter the size of array => ";
    cin>>size;
    int arr_1[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element on ["<<i<<"] index => ";
        cin>>arr_1[i];}
    for(int i=0;i<size;i++){
        cout<<arr_1[i]<<" ";
    }
    int k=0;
    int l=size-1;
    int count_1=0;
    while(k<l){
        if(arr_1[k]!=arr_1[l]){
            cout<<endl<<"This is not palindrome.";
            count_1=1;
            break;
        }
        k++;
        l--;
    }
    if(count_1!=1){
        cout<<endl<<"Yes it is palindrome.";
    }
    //-----------------here program finish with only one array other option is written down to verify wheter it is palindrome or not!------.
    int arr_2[size];
           for(int k=0;k<size;k++){
        arr_2[k]=arr_1[(size-1)-k];
        }
        cout<<endl<<"2nd array is now => {";
    for(int i=0;i<size;i++){
        cout<<arr_2[i]<<",";
    } 
     cout<<"\b}";
     for(int i=0;i<size;i++){
    if(arr_1[i]==arr_2[i]){
       count++;
    }
}
    if(count==size){
         cout<<endl<<"Yes! it is a palindrome.";
    }
    else {
        cout<<endl<<" No! it is not a palindrom.";
    }
   
    return 0;
}