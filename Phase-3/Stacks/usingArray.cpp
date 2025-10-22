#include<iostream>
using namespace std;
class Stack{
    int * arr;
    int size;
    int top;
    // constructor-
        public:
        Stack(){

        }
    Stack(int size){
        this-> size=size;
        arr = new int[size];
        top=-1;
    }
    void push(int val){
      if(size-top>1){
        top++;
        arr[top]=val;
      }
      else{
        cout<<"Stack is Overflow!"<<endl;
      }
    }
    void pop(){
       if(top>=0){
        top--;
}
       else{
        cout<<"Stack is Underflow!"<<endl;
       }
    }
    int peek(){
      if(top>=0){
        cout<<arr[top]<<endl;
        return arr[top];
      }
      else{
        cout<<"Stack is Underflow!"<<endl;
        return -1;
      }
    }
    bool empty(){
      if(top>=0){
        cout<<"Stack is not empty! "<<endl;
        return false;
      }
      else{
        cout<<"Stack is empty!"<<endl;
        return true;
      }
    }
};
int main(){
    Stack s(5);
    s.push(45);
    s.push(3);
    s.push(56);
    s.peek();
    s.pop();
    cout<<s.empty()<<endl;
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    if(s.empty()){
        cout<<"Stack is empty bro!"<<endl;
    }
    else{
        cout<<"stack is not empty bro!"<<endl;
    }
    
    return 0;
}