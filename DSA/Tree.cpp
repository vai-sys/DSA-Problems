#include <iostream>
#include<climits>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

   
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* addNode(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }

   if(root->left==NULL){
    root->left=new Node(data);
   }
   else if(root->right==NULL){
    root->right=new Node(data);
   }
   else{
    root->left=addNode(root->left,data);
   }

    return root;
}

void maxE(Node* root,int &num){
    if(!root) return ;
   
    if(root->data >num){
        num=root->data;
    }
    maxE(root->left,num);
    maxE(root->right,num);
}

bool search(Node* root,int num){
    if(root==NULL) return false;
    if(root->data==num){
        return true;
    }
    return search(root->left,num) || search(root->right,num);
}


int solve(Node* root){
    if(!root) return 0;
  
    int leftSum= solve(root->left);
     int rightSum=solve(root->right);
     return leftSum+ rightSum +root->data;



}

int sumTree(Node* root){
    
  
    return solve(root);
   
}


void inorder(Node* root) {
    if (root == NULL) return;
    
    inorder(root->left);
    cout << root->data << " -> ";
    inorder(root->right);
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " -> ";
    preOrder(root->left);
    preOrder(root->right);
}

int Height(Node* root){
    if(root==NULL) return 0;
    int leftans=Height(root->left);
    int rightans=Height(root->right);
    return max(leftans,rightans)+1;
}

int main() {
    Node* root = NULL;

   
    root = addNode(root, 10);
    // root = addNode(root, 20);
    // root = addNode(root, 70);
    // root = addNode(root, 90);
    // root = addNode(root, 40);
    // root = addNode(root, 60);
    int height=Height(root);
    cout<<"Height is\t"<<height<<endl;

    // int sum=sumTree(root);
    // cout<<"sum is\t"<<sum<<endl;
//     int val=90;
//     bool ans=search(root,val);
//     cout<<"value exists?\t"<<endl;
// if(ans){
//    cout<<"True"<<endl;
// }
// else{
// cout<<"False"<<endl;
// }

    // int num=INT_MIN;
    // maxE(root,num);
    // cout<<"Max E is\t"<<num<<endl;

    // cout << "Inorder Traversal: ";
    // inorder(root);
    // cout<<endl;
   
    // cout << "PreOrder Traversal: ";
    // preOrder(root);
    // cout << "NULL" << endl;

    return 0;
}
