#include<iostream>
using namespace std;
int row_sum(int a[][100],int row,int col ){
      int r1,r2,l1,l2,sum=0;
//    cout<<"\nEnter the value of 'r1' and 'l1' => ";
//    cin>>r1>>l1;
//     cout<<"Enter the value of 'r2' and 'l2' => ";
//    cin>>r2>>l2;
r1=0;
l1=0;
   for(int i=r1;i<=r2;i++){
   
    for(int j=l1;j<=l2;j++){
        sum+=a[i][j];
    }
    l1++;
     
   }
   
    return sum ;
}
int main(){
   int row,col,arr[100][100];
   cout<<"\nEnter the number of row => ";
   cin>>row;
   cout<<"Enter the number of coloumns => ";
   cin>>col;
    arr[row][col];
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
   for(int i=0;i<row;i++){
 
 cout<<endl<<"The sum of" <<i+1<<"row is => "<<row_sum(arr,row,col);
 
   }
   return 0;
}