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
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   int r1,r2,l1,l2;
   cout<<"Enter the value of 'r1' and 'l1' => ";
   cin>>r1>>l1;
    cout<<"Enter the value of 'r2' and 'l2' => ";
   cin>>r2>>l2;
   for(int i=r1;i<=r2;i++){
    for(int j=l1;j<=l2;j++){
        sum+=arr[i][j];
    }
   }
   cout<<"The sum of that rectangle is => "<<sum;
   return 0;
}