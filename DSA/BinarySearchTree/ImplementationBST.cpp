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
void preOrder(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void inOrder(Node* root){
    if(root==NULL)return;
   inOrder(root->left);
    cout<<root->data<<" ";
    
   inOrder(root->right);

}


void postOrder(Node* root){
    if(root==NULL)return;
  postOrder(root->left);
   postOrder(root->right);
    cout<<root->data<<" ";

}
Node* minValue(Node* root){
    if(root==NULL)return NULL;
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}


int main(){
    Node* root=NULL;
    createBST(root);
    levelOrder(root);
    cout<<"Inorder Traversal"<<endl;
    inOrder(root);
    cout<<"Preorder Traversal"<<endl;
    preOrder(root);
    cout<<"PostOrder Traversal"<<endl;
    postOrder(root);
    cout<<"MInValue is"<<endl;
   Node* minvalue= minValue(root);
   if(minvalue==NULL){
    cout<<"no minValue"<<endl;
   }
   else{
    cout<<"MIN VALUE"<<minvalue->data<<endl;
   }
    return 0;
}
