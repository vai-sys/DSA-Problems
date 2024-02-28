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
    this->data=data;
    this->next=nullptr;
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

void DeleteHead(node* &head,node* &tail){
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

void DeleteTail(node* &head,node* &tail){
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
      node* prev=head;
      while(prev->next!=tail){
        prev=prev->next;
        
      }
      prev->next=nullptr;
      delete tail;
        tail=prev;
      


    }
}

// delete node in middle 
void DeleteMiddle(node* &head,node* &tail,int pos){
  int length= getlength(head);
if(head==nullptr){
  cout<<"cannot delete";
  return ;
}
else if(pos==1){
  DeleteHead(head,tail);
  
}
else if(pos==length){
  DeleteTail(head,tail);
}
else{
  node* prev=nullptr;
  node* curr=head;
  while(pos!=1){
    prev=curr;
    pos--;
    curr=curr->next;
  }
   prev->next=curr->next;
  curr->next=nullptr;
  delete curr;
}
}

int main() {
    // Create an empty linked list
    node* head = nullptr;
    node* tail = nullptr;

    // Add nodes to the linked list
    for (int i = 1; i <= 5; ++i) {
        node* newNode = new node(i);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Display the initial linked list
    cout << "Initial Linked List: ";
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete node at head position
    DeleteHead(head, tail);
    cout << "Linked List after deleting head: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete node at tail position
    DeleteTail(head, tail);
    cout << "Linked List after deleting tail: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete node in the middle (e.g., at position 2)
    int middlePos = 2;
    DeleteMiddle(head, tail, middlePos);
    cout << "Linked List after deleting node at position " << middlePos << ": ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Cleanup: Free memory
    temp = head;
    while (temp != nullptr) {
        node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}



