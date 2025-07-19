#include<iostream>
using namespace std;
int main(){
   int row,col;
   cout<<"Enter the number of row => ";
   cin>>row;
   cout<<"Enter the number of coloumns => ";
   cin>>col;
 int arr[row][col];
//    for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         cout<<"Enter the element on ["<<i<<"]["<<j<<"] => ";
//         cin>>arr[i][j];
//     }
//    }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       arr[i][j]=10;
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}