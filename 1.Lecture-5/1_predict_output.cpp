#include<iostream>
using namespace std;
int main(){
    int s=1;
    int b=2;
    if(s-- > 0 && ++b > 2){
        cout<<"Stage1 - Inside If"<<endl;
        }
        else{
            cout<<"Stage2 - Inside If"<<endl;
        }
        cout<< s<< " "<< b<< endl; 
}