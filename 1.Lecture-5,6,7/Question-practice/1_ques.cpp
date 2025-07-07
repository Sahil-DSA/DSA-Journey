// -----Subtract the product and sum of the digits  of an integer.-----
#include<iostream>
using namespace std;
int main(){
    int num,r,sum=0,product=1,rev=0;
    cout<<"Enter the number => ";
    cin>>num;
    while(num>0){
        r=num%10;
        sum=sum+r;
        product=product*r;
       rev*=10;
        rev=r+ rev;
        num=num/10;
    }
    cout<<"Reverse => "<<rev<<endl;
    cout<<"product => "<<product<<endl;
    cout<<"Sum => "<<sum<<endl;
    cout<<"Difference => "<<product - sum;
    return 0;
}