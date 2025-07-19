#include<iostream>
using namespace std;
int main(){
   int row,col;
   cout<<"Enter the number of row => ";
   cin>>row;
   cout<<"Enter the number of coloumns => ";
   cin>>col;
   int arr[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"Enter the element on ["<<i<<"]["<<j<<"] => ";
        cin>>arr[i][j];
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   int x=arr[0][0];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(x<arr[i][j]){
            x=arr[i][j];
        }
    }
   }
   cout<<"The Maximum element in array is => "<<x;
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(x>arr[i][j]){
        x=arr[i][j];
      }
    }
}
    cout<<endl<<"The Minimum element in array is => "<<x;
   return 0;
}