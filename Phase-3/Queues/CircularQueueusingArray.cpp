#include<iostream>
using namespace std;
static int count=0;
class Queue {
    int*arr;
    int currSize,cap;
    int f,r;
    public:
    Queue(int size){
        cap= size;
        arr= new int(cap);
        currSize=0;
        f=0;
        r=-1;
    }
    void enqueue(int data){
        if(currSize==cap){
            cout<<"Overflow!"<<endl;
        return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currSize++;
    }
    void dequeue(){
        if(empty()){
            cout<<"Underflow!"<<endl;
        return;
        }
        f=(f+1)%cap;
        currSize--;
    }
    int front(){
      if(empty()){
        cout<<"Underflow!"<<endl;
         return -1;
       }
       return arr[f];
    }
    bool empty(){
        return currSize==0;
    }
    void print(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(3);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.print();
    q.enqueue(5);
    q.print();
    return 0;
}