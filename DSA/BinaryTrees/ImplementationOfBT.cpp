#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;
 
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    ~node() {
        delete left;
        delete right;
    }
};


node* createTree() {
    cout << "Enter node (-1 to terminate): " << endl;
    int data;
    cin >> data;
    if (data == -1)
        return NULL;
    node* root = new node(data);
    root->left = createTree();
    root->right = createTree();
    return root; 
}

void preorder(node* root){
    if(root==NULL) return;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

void inOrder(node* root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data <<endl;
    inOrder(root->right);
}

void postOrder(node* root){
    if(root==NULL)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data <<endl;
}

void levelOrder(node*root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* front=q.front();
        q.pop();
        cout<<front->data;
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }
}

// Main function
int main() {
    node* root = createTree();
    cout<<"Printing Preorder"<<"   ";
    preorder(root);
    cout<<endl;
    cout<<"printing PostOrder"<<"   ";
    postOrder(root);
    cout<<endl;
      cout<<"printing InOrder"<<"   ";
    inOrder(root);
    cout<<endl;
    cout<<" printing LevelOrder"<<endl;
    levelOrder(root);
    cout<<endl;
    // delete root;
    return 0;
}

