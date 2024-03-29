#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

  
    node() : data(0), next(nullptr), prev(nullptr) {}


    node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

void printLL(node* &head) {
    node* newnode = head;
    while (newnode != nullptr) {
        cout << newnode->data;
        if (newnode->next != nullptr) {
            cout << "->";
        }
        else{
            cout<<"-> NULL";
        }
        newnode = newnode->next;
    }
    cout << endl;
}

int getLength(node* &head) {
    node* newnode = head;
    int len = 0;
    while (newnode != nullptr) {
        len++;
        newnode = newnode->next;
    }
    return len;
}

void insertAtHeadDLL(node* &head, node* &tail, int data) {
    if (head == nullptr) {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    } else {
        node* temp = new node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(node* &head, node* &tail, int data) {
    if (head == nullptr) {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    } else {
        node* temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtMiddle(node* &head,node* &tail,int data,int pos){
    int length=getLength(head);
  if (head == nullptr) {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    } else if(pos==1) {
        insertAtHeadDLL(head,tail,data);
      
    }
    else if(pos==length+1){
        insertAtTail(head,tail,data);
    }
    else{
        node* temp=new node(data);
        node* prevNode=nullptr;
        node* currNode=head;
        while(pos!=1){
            pos--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        prevNode->next=temp;
        temp->prev=prevNode;
        temp->next=currNode;
        currNode->prev=temp;

    }
}
 void Deletion(node* &head,node* &tail,int pos){
    // no node
    int length=getLength(head);
    if(head==nullptr){
        cout<<"Can't Delete "<<endl;
        return;
    }
    // delete at head
    else if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=nullptr;
        head->prev=nullptr;
        delete temp;

    }
    // if one node exists
    else if(head==tail){
        node* temp=head;
        delete head;
        head=nullptr;
        tail=nullptr;

    }
    //  delete at tail
    else if(pos==length+1){
     node* prevnode=tail->prev;
     prevnode->next=nullptr;
     tail->prev=nullptr;
    delete tail;
    tail=prevnode;
    }
    else{
        // insert at middle
        node* temp=new node();
        node* prevnode=nullptr;
        node* currnode=head;
        while(pos!=1){
            pos--;
            prevnode=currnode;
            currnode=currnode->next;
        }
        node* nextnode=currnode->next;
        prevnode->next=nextnode;
        currnode->prev=nullptr;
        currnode->next=nullptr;
        nextnode->prev=prevnode;
        delete currnode;

    }

 }

int main() {
    node* head = nullptr;
    node* tail = nullptr;
    insertAtHeadDLL(head, tail, 10);
    insertAtHeadDLL(head, tail, 20);
    insertAtHeadDLL(head, tail, 30);
    insertAtHeadDLL(head, tail, 40);
    insertAtHeadDLL(head, tail, 50);
    insertAtTail(head, tail, 5);
    insertAtMiddle(head,tail,100,4);
    

    cout << "Doubly Linked List: \t";
    printLL(head);
    Deletion(head,tail,6);
    cout<<"after deletion"<<endl;
    printLL(head);

    return 0;
}
