#include<iostream>
using namespace std;

 class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }

 };

 Node* push(Node* head,int data){

 

 }

int main(){
 Node* head;
 int data;
 cout<<"enter the data to push in stack"<<endl;
 cin>>data;
 Node* head=push(head,data);
 Node* cur=head;
 while(cur!=NULL){
    cout<<cur->data<<"->";
 }   
 return 0;
}