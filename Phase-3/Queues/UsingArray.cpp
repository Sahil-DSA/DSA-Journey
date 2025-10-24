#include<iostream>
using namespace std;

class Queue {
    int front, rear, size;
    int* arr;
public:
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = 0;
        rear = -1;
        cout<<"Constructor called! "<<endl;
    }

    ~Queue() {
        cout<<"Destructor called!"<<endl;
        delete[] arr; 
    }

    void enqueue(int val) {
        if (is_full()) {
            cout << "Overflow!" << endl;
            return;
        }
        arr[++rear] = val;
    }

    void dequeue() {
        if (is_empty()) {
            cout << "Underflow!" << endl;
            return;
        }
        front++;
    }

    int peek() {
        if (is_empty()) {
            cout << "Underflow!" << endl;
            return -1;
        }
        return arr[front];
    }
    void display(){
        for(int i= front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool is_full() { return rear == size - 1; }
    bool is_empty() { return front > rear; }
};
int main(){
     Queue q(5);
     q.enqueue(1);
     q.enqueue(2);
     q.enqueue(3);
     q.display();
     q.dequeue();
     q.display();
    return 0;
}