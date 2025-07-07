// -----------compliment of number -------
#include<iostream>
using namespace std;
int main(){
    int num,n,mask;
    cout<<"Enter the number => ";
    cin>>num;
    n=num;
    mask=0;
    while(num>0){
        mask=(mask<<1)|1;
        num=(num>>1);
    }
    int compliment=(~n)&mask; //(~101)=111111...1010 & mask= 111111...1010 & 000000...0111=000000...010 ,that's answer.
    cout<<"Compliment of "<<n<<" is => "<<compliment;
    return 0;
}