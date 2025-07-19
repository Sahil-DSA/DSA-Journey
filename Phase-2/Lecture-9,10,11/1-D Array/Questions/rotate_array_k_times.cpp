#include<iostream>
using namespace std;
int reverse(int array[],int a,int b){
    for(int i=a,j=b;i<=j;i++,j--){          //part reverse
        int temp =array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
int main (){
    int size,k;
    cout<<"Enter the size of array => ";
    cin>>size;
    cout<<"Entetr the number of rotations => ";
    cin>>k;
    k=k%size;
   int  array[size];
for(int i=0;i<size;i++){
    cout<<"Enter the element on index ["<<i<<"] => ";
    cin>>array[i];
}
// ---Original array-----
cout<<"The array is => {";
for(int i=0;i<size;i++){
    cout<<array[i]<<",";
}
cout<<"\b}"<<endl;
// ---Fully reversed array----
reverse(array,0,size-1);
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
//---After reversing first k elements of array-----
reverse(array,0,k-1);
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
//---Again reversing the rest of array after the k elements-----
//----Final array as rotating k times-------
reverse(array,k,size-1);
cout<<"Final array => {";
for(int i=0;i<size;i++){
    cout<<array[i]<<",";
}
cout<<"\b}";
   return 0;
}