
//----power(a,b) problem-----

#include<iostream>
using namespace std;
int main(){
    float num,power,ans,j;
    cout<<"Enter the base => ";
    cin>>num;
    cout<<"Enter the power => ";
    cin>>power;
    j=power;
    float x=1;
    if(power<0){
        int y=-power;
        float m;
        for(int i=1;i<=y;i++){
            m=num*x;
            x*=num;
        }
        ans=1/m;
        cout<<"Ans => "<<ans;

    }
    else if(power>0 ){
    for(int i=1;i<=j;i++){
        ans=num*x;
        x*=num;
    }
    cout<<"Ans => "<<ans;
}
else{
    cout<<"Ans => 1";
}
return 0;
}