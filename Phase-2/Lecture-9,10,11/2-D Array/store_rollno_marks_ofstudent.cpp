#include<iostream>
using namespace std;
int main(){
   int row,col;
   cout<<"Enter the number of student => ";
   
   cin>>row;
   cout<<"Enter the number of coloumns => ";
   cin>>col;
   int arr[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(j==0){
            cout<<"Enter the roll no => ";
            cin>>arr[i][j];
        }
        else if (j==1){
            cout<<"Enter the marks in Physics => ";
            cin>>arr[i][j];
        }
        else if(j==2){
            cout<<"Enter the marks in Chemistry => ";
            cin>>arr[i][j];
        }
        else{
        cout<<"Enter the marks in Maths => ";
        cin>>arr[i][j];
        }
    }
   }
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}