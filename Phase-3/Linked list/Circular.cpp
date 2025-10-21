#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int val){
    data=val;
    next=NULL;
   }
};
class List{
    Node* head=NULL;
    Node* tail=NULL;
    public:  
    List(){
        tail=head=NULL;
      }
      void push_front(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
            
        }
      }
      void print(){
       
         cout<<head->data<<"->";
          Node*temp=head->next;
        while(temp!=tail->next){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
      }
};
int main(){
    List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(5);
    l1.print();
    return 0;
}