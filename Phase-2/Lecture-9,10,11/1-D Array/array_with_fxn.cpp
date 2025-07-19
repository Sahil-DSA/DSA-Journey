#include<iostream>
using namespace std;
int print_array(int arr[],int v){
for(int i=0;i<v;i++){
    cout<<(arr[i]=3)<<" ";
}
return 0;
}
int main(){
    int array[12];
    int size=12;
    print_array(array,size);
    return 0;
}