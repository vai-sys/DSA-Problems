#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node*bottom;
    node(int data){
        this->data=data;
        this->next=NULL;
        this->bottom=NULL;
    }
};

node* merge(node* &l1,node* &l2){
node* temp=new node(0);
node* ans=temp;
while(l1!=NULL && l2!=NULL){
   if(l1->data < l2->data){
    temp->bottom=l1;
    temp=temp->bottom;
    l1=l1->bottom;
}
else{
    temp->bottom=l2;
    temp=temp->bottom;
    l2=l2->bottom;
}
if(l1!=NULL) return l1;
if(l2!=NULL) return l2;
return ans->bottom;

}
}

node* flatten(node* &root){
    if(root==NULL || root->next==NULL){
        return root;
    }
    node* temp= root->next;
     root->next = flatten(root->next); 
  
        root = merge(root, root->next); 
        return root;
}


