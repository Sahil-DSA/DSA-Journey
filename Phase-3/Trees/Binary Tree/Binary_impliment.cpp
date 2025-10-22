#include<iostream>
#include<vector>
using namespace std;

    // ----------Node structure-------------  
class Node{                        // Preoreder seq.=[1,2,-1,-1,3,4,-1,-1,5,-1,-1]
  public:                               //           1          //
   int data;                        //              / \          //
   Node* left;              //                     2   3          //
   Node* right;              //                   /\  / \          //
   Node(int val){         //                     N N 4   5         //
    data = val;         //                          / \ / \         //
    left=right=NULL;     //                        N   NN  N       //
   }
};

//------------Implementing of Nodes into Tree--------- 0(n) complexity
static int idx= -1;
Node* buildTree(vector<int>preorder){
       idx++;
      if(preorder[idx]==-1){ // Base case of recursive fxn
       return NULL;
      }
       Node* root=new Node(preorder[idx]);
       root->left=buildTree(preorder);   // Left side of Tree
       root->right=buildTree(preorder);  // Right side of Tree
       return root;
    }

    //----------PreOrder Traversal to print tree--------------- 0(n) complexity 
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

 // -----------InOrder Traversal to print tree----------------- 0(n) complexity
void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

// -------------PostOrder Traversal to print Tree------------- 0(n) complexity
void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    vector<int>preorder ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
     Node * root= buildTree(preorder);
     cout<<root->data<<endl;
          cout<<root->left->data<<endl;
               cout<<root->right->data<<endl;
               preOrder(root);
               cout<<endl;
               inOrder(root);
               cout<<endl;
               postOrder(root);
    return 0;
}