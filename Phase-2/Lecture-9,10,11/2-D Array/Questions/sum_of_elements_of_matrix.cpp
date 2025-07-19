#include<iostream>
using namespace std;
int main(){
   int row,col,sum=0;
   cout<<"Enter the number of row => ";
   cin>>row;
   cout<<"Enter the number of coloumns => ";
   cin>>col;
   int arr[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"Enter the element on ["<<i<<"]["<<j<<"] => ";
        cin>>arr[i][j];
        sum=sum+arr[i][j];
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl<<sum;
   return 0;
}