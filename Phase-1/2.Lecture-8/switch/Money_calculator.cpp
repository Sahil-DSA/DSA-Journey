#include<iostream>
using namespace std;
int main(){
    int money,x,no_of_note,rest_of_money;
    cout<<"Enter the money => ";
    cin>>money;
    switch (1)
    {
    case 1:
        no_of_note=  (money/100);
        cout<<no_of_note<<" number of 100 rupees notes are needed!"<<endl;
        x=  (no_of_note*100);
        rest_of_money=  (money-x);
    case 2:
        no_of_note=rest_of_money/50;
        cout<<no_of_note<<" numbers of 50 rupees notes are needed!"<<endl;
        x=no_of_note*50;
        rest_of_money=rest_of_money-x;
    case 3:
        no_of_note=rest_of_money/20;
        cout<<no_of_note<<" number of 20 rupees notes are needed!"<<endl;
        x=no_of_note*20;
        rest_of_money=rest_of_money-x;
    case 4:
        no_of_note=rest_of_money/1;
        cout<<no_of_note<<" number of 1 ruppes coins are needed!";
    break;
    }
    
}