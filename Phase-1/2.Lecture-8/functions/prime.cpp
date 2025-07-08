#include<iostream>
using namespace std;
int prime(int num){
 //int fowl=0;
    // if(num<=0){
    //     cout<<"Neither a prime number nor composite number!";
    // }
    // else{
    // for(int i=2;i<=num/2;i++){
    //    if( num%i==0){
    //     fowl=1;
    //     break;
     //  }
     
    // }
    //     if(fowl==0){
    //     cout<<"It is prime number!";
    // }
    // else{
    //     cout<<"It is a composite number!";
    // }
    // }
    for(int i=2;i<=num/2;i++){
     if(num%i==0)
     return 0;
    
    else
        return 1;
    
    }
}
int main(){
        int num;
    cout<<"Enter the number => ";
    cin>>num;
    if(num<=0){
        cout<<"It is neither a prime nor composite!";
    }
    else{
   if( prime(num)){
    cout<<"It is prime number!";
   }
   else{
    cout<<"It is composite number!";
   }
}
return 0;
}