#include<iostream>
#include<list>
using namespace std;
class Queue{
list<int>ll;
public:
void inqueue(int val){
   ll.push_back(val);
}
void dequeue(){
    ll.pop_front();
}
void display(){
    
};
int main(){
    
    return 0;
}