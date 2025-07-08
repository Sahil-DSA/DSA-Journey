#include<iostream>
using namespace std;
int no_of_bit(int y){
    int count=0;
   while(y>0){
    if(y&1){
        count++;
    }
    y=y>>1;
   }
   return count;
}
int main(){
    int a,b;
    cout<<"Enter the first number => ";
    cin>>a;
    cout<<"Enter the second number => ";
    cin>>b;
  cout<<"Total number of set bits in "<<a<<" and "<<b<<" => "<<no_of_bit(a)+no_of_bit(b);
}