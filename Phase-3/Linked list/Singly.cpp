#include<iostream>
using namespace std;
//  creating Node with its properties------
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
// combining the nodes in list----
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=tail=NULL;
    }
  // inserting node in front of the list--------  
    void push_front(int val){ // 0(1) because we don't use any loop here 
        Node* newNode= new Node(val); // dynamic implimentation
        if (head==NULL){
            head=tail=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
            return;
        }
    }
    // inserting node at back --------
    void push_back(int val){// 0(1) here also
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        return;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    // deleting node from the front of list-------------
    void pop_front(){ //0(1) here also
        if(head==NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        else{
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;// because our node is initialize dynamically
        }
    }
    //deleting node from the end of list--------- 
    void pop_back(){ // 0(n) because here loop used , where n represents the size of list
        if(head==NULL){
            cout<<"Linked list is empty!"<<endl;
            return;
        }
        else{
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
             temp->next=NULL;
             delete tail;
             tail=temp;
        }
    }
    // inserting element at any position ---------
    void insert(int val,int pos){// 0(n)
        if(pos<1){
            cout<<"Invalid position!"<<endl;
        }
        else{
        if(head==NULL || pos==1){
            push_front(val);
        }
        else{
            Node* newNode=new Node(val);
        Node*temp=head;
        int x=1;
        while(x!=pos-1){
            temp=temp->next;
            x++;
        }
          newNode->next=temp->next;
       temp->next=newNode;
    }
}
    }
void delition(int val){
    Node* temp =head;
    int x=1;
    while(temp!=NULL){
        if(temp->data==val){
           break;
        }
        x++;
        temp=temp->next;
    } 
    if(x==1){
        pop_front();
    }
    else{
    int y=1;
    Node*temp2=head;
    while(y<x-1){
        temp2=temp2->next;
        y++;
    }
    temp2->next=temp->next;
    temp->next=NULL;
    delete temp;
    }
}

    // Searching any element in the list------
    void search(int val){  //0(n)
     Node*temp=head;
        int x=1;
        bool y=true;
        while(temp!=NULL){
            if(temp->data==val){
                cout<<"Element found at number=> "<<x<<endl;
            y=false;
            break;
            }
          x++;
          temp=temp->next;  
        }
        if(y==true){
            cout<<"Element not found!"<<endl;
}
    }
    // Printing the list--------
    void print(){  //0(n)
        Node* temp= head;
        while(temp!=NULL){  
            cout<<temp->data<<"-->";
            temp= temp->next;
        }
        cout<<"NUll"<<endl;

    }
};
int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.print();
    // l1.pop_front();
    // l1.insert(7,1);
    // l1.insert(6,01);
    // l1.print();
    // l1.search(5);
    l1.delition(5);
    l1.print();
    return 0;
}