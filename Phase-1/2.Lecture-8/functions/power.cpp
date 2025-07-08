#include<iostream>
using namespace std;
int pow(){
        int base,power;
    cout<<"Enter the base number => ";
    cin>>base;
    cout<<"Enter the power => ";
    cin>>power;
    if(power==0){
        cout<<"1";
    }
    else{
    int ans=1;
    for(int i=1;i<=power;i++){
        ans=base*ans;
    }
    cout<<ans<<endl;
}
    return 0;
}
int main(){
pow();
pow();
pow();
    return 0;
}