
//----------binary to decimal---------
#include<iostream>
using namespace std;
int main(){
    int num,r,sum=0,n=1;
    cout<<"Enter the binary  num => ";
    cin>>num;
    while(num>0){
        r=num%10;
        sum=sum+r*n;
        n*=2;
        num=num/10;
    }
    cout<<sum<<endl;
    // ------------OR--------------
        while(num>0){
       if(num&1){     
        sum=sum+r*n;
        n*=2;
        num<<1;
    }
}
    cout<<sum;
    return 0;
}