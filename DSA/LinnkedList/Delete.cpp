#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor should be public
    node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void DeleteN(node* &head, int M, int N) {
    node* temp=head;
    if(head==nullptr)return;
   while(temp!=nullptr){
     for(int i=0;i<M-1;i++){
         temp=temp->next;
    }
     // now temp is at m-1 position
      node* curr=temp->next;

     for(int i=0;i<N ;i++){
        curr=curr->next;
     }
    //  now current is at location where we have skip 2 elements

    temp->next=curr;
    temp=curr;

   }
}


void printList(node* head) {
    node* current = head;
    while (current) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(6);
    head->next->next->next->next->next->next = new node(7);
    head->next->next->next->next->next->next->next = new node(8);

    
    cout << "Original Linked List:" << endl;
    printList(head);

    
    int M = 2;
    int N = 2;
    DeleteN(head, M, N);

    
    cout << "\nModified Linked List:" << endl;
    printList(head);

   
    while (head) {
        node* nextNode = head->next;
        delete head;
        head = nextNode;
    }

    return 0;
}
