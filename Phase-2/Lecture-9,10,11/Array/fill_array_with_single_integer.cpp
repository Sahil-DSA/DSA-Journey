#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[100];
    fill_n(a,100,1);//fill all array with -24.
    cout<<a[6]<<endl;
    for(int i=0;i<100;i++){
        a[i]=1;
        cout<<a[i]<<" ";
    }
    
}
