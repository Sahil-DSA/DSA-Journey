
//------Thw number of 1 Bits in num " n"-------
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num => ";// let num=11            
    cin>>num;             
    int count=0;
    while(num!=0){            //11!=0                 //5!=0                 //2!=0                               //1!=0              //0==0
        if(num&1){            // 1011 & 1= 1011,1&1=1 //0101 & 1=0101, 1&1=1 //0010 & 1 = 0010, 0&1=0             //1 &1=1            // --LOOP FINISHED---
            count++;          //count=1               //count=2              //count=2 (because num last bit is 0) //count =3
        }                     //                      //                     //                                    //
        num=num>>1;           //1011>>1 == 0101 (5)   //0101>>1 == 0010 (2)  //0010>>1 == 0001 (1)                 //0001>>1=0000 (0)
    }
    cout<<"Number of 1 bit =>"<<count;
    return 0;
}