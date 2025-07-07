
//---------power of 2------------
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    bool x=false;
    cout<<"Enter the num => ";
    cin>>num;
while(num>1){
    int r =num%2;
    if(r!=0){
      x=true;  
    }
    num=num/2;
}
if(x==true){
    cout<<"No it can't be written the power of 2!";
}
else{
    cout<<"Yes it can be written the power of 2!";
}
}