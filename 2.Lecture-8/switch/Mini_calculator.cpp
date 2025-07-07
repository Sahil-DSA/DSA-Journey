#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char operator_;
    cout<<"----------------------Welcome To \"MINI CALCULATOR\"--------------------------"<<endl;
    cout<<"Enter the 1st number => ";
    cin>>num1;
    cout<<"Enter the 2nd number => ";
    cin>>num2;
    
    cout<<"\nEnter any of these opertors (+,-,%,/,*) you want to try----->\n => ";
    cin>>operator_;
    switch(operator_){
        case '+':
        cout<<"Addition => "<<num1+num2;
        break;
          case '-':
        cout<<"Difference => "<<num1-num2;
        break;
          case '*':
        cout<<"Product => "<<num1*num2;
        break;
          case '/':
          if(num2==0){
            cout<<"Zero is not valid in dinominator!";
          }
          else{
        cout<<"Quotient => "<<num1/num2;
          }
        break;
          case '%':
          if(num2==0){
            cout<<"Zero is not valid in denominator for module!";
          }
          else{
        cout<<"Remainder => "<<(int)num1%(int)num2;
          }
          break;
    default :
    cout<<"Please enter the valid operators!";
    break;
}
}