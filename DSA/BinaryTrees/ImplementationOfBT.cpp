#include<iostream>
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

// Main function
int main() {
    node* root = createTree();
    cout<<"Printing Preorder"<<"   ";
    preorder(root);
    cout<<endl;
    cout<<"printing PostOrder"<<"   ";
    postOrder(root);
    cout<<endl;
    // delete root;
    return 0;
}

