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

node* merge(node*l1,node*l2){
    node*res=new node(-1);
    node*temp=res;
    while(l1 && l2){
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
    }
    if (l1) temp->bottom=l1;
    if(l2) temp->bottom=l2

    return res->bottom;

}

node* flatten(node*head){
    if(head!=NULL && head->next!=NULL){
        return head;
    }
    
}

