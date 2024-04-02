#include<iostream>
#include<queue>
using namespace std;

class Node{
public: 
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root, int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertIntoBST(root->right, data);
    }
    else{
        root->left=insertIntoBST(root->left, data);
    }
    return root;
}

void createBST(Node* & root){
    cout<<"enter data"<<endl;
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root, data);
        cin>>data;
    }
}

void levelOrder(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        auto temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* root=NULL;
    createBST(root);
    levelOrder(root);
    return 0;
}
