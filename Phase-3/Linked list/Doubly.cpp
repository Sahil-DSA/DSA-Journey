#include<iostream>
using namespace std;
class Node{
    public:
   int data;
   Node* prev;
   Node* next;
   Node(int val){
      data=val;
      prev=next=NULL;
   }
};
class List{
   Node* head;
   Node* tail;
   public:
   List(){
    head=tail=NULL;
   }
  void push_front(int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
void insert(int val,int pos){
    Node* newNode=new Node(val);
    int x=1;
    Node*temp=head;
    while(x!=pos){
      temp=temp->next;
      x++;
    }
    if(pos=1){
        push_front(val);
    }
    else{
    newNode->prev=temp->prev;
    temp->prev->next=newNode;
    temp->prev=newNode;
    newNode->next=temp;
    }
}
void print(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(3);
    l1.push_front(5);
    l1.print();
    l1.insert(4,1);
    l1.print();
        return 0;
}