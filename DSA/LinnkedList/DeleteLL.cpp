#include<iostream>
using namespace std;

class node {
public:
  int data;
  node* next;

  node(){
    next=nullptr;
  }
  node(int data){
    data=data;
    next=nullptr;
  }
  ~node(){
    cout<<"Distructer called";
  }
};

// to find the length of linkedList

int getlength(node* head){
    node* temp=head;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;

    }
    return count;
}

// to Delete at head position

void DeleteHead(node* head,node* tail){
    if(head==nullptr){
        cout<<"can't delete,coz LinkedList is empty"<<endl;
        return;
    }
    else if(head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
    }
    else{
        node* temp=head;
        head=head->next;
        temp->next=nullptr;
        delete temp;

    }
}

// delete node at tail position

void DeleteTail(node* head,node* tail){
     if(head==nullptr){
        cout<<"can't delete,coz LinkedList is empty"<<endl;
        return;
    }
    else if(head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
    }
    else{

    }
}



