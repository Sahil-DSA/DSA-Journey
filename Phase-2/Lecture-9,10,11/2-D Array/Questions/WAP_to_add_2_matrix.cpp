#include<iostream>
using namespace std;
int main(){
   int row,col;
   cout<<"Enter the number of row => ";
   cin>>row;
   cout<<"Enter the number of coloumns => ";
   cin>>col;
   int arr_1[row][col];
   int arr_2[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"Enter the element on ["<<i<<"]["<<j<<"] => ";
        cin>>arr_1[i][j];
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr_1[i][j]<<" ";
    }
    cout<<endl;
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"Enter the element on ["<<i<<"]["<<j<<"] => ";
        cin>>arr_2[i][j];
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr_2[i][j]<<" ";
    }
    cout<<endl;
   }
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
   arr_2[i][j]=arr_1[i][j]+arr_2[i][j];
    }
}
cout<<"The resultant matrix is => \n";
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr_2[i][j]<<" ";
    }
    cout<<endl;
}
   return 0;
}