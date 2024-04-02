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


pair<int,int>height(node* root){
    int sum=root->data;
    if(root==NULL){
        return {0,0}; 
    }
     auto lh=height(root->left);
     auto rh=height(root->right);
     if(lh.first==rh.first){
        sum+=lh.second >rh.second ?lh.second : rh.second; 
     }
     else if(lh.first > rh.first){
        sum+=lh.second;
     }
     else{
        sum+=rh.second;
     }
     return {max(lh.first,rh.first)+1,sum};
}

int longest(node* root){
    auto h=height(root);
    return h.second;
}