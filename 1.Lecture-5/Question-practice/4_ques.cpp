
//-----Decimal to Binary--------

#include<iostream>
using namespace std;
int main(){
    int num,r,sum=0,j=1,bit;
    cout<<"Enter the decimal number => ";
    cin>>num;
    // while(num>0){
    //    r=num%2;
    //    sum=sum+r*j;
    //    j*=10;
    //    num=num/2;
    // }
    // cout<<sum<<endl;
    // -----------OR--------------
while(num!=0){
     bit=num&1;
    sum= sum+ bit*j;
    j*=10;
    num=num>>1;
}
cout<<sum;
}