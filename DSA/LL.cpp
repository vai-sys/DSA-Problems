#include <iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    ListNode(int data) {
        this->data = data;
        this->next = NULL;
    }
};

ListNode* solve(ListNode* head, int data) {
    if (!head) {
        head = new ListNode(data);
        return head;
    } 
    ListNode* temp = head;
    

    while (temp->next != NULL) {
        temp = temp->next;
    }
    
  
    temp->next = new ListNode(data);
    
    return head;
}

ListNode* insertFirst(int data,ListNode* head){
    ListNode* node=new ListNode(data);
    node->next=head;
    head=node;
    return head;


}
ListNode* deleteLast(ListNode* head){
    if(!head) return NULL;
    if(head->next==NULL) return NULL;
    ListNode* temp=head;
    ListNode* prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;

    }
    prev->next=NULL;
    return head;
    
}

ListNode* reverse(ListNode* head) {
    if (!head) return NULL; 
    
    ListNode* prev = NULL;
    ListNode* cur = head;

    while (cur) {  
        ListNode* nextNode = cur->next; 
        cur->next = prev;   
        prev = cur;         
        cur = nextNode;     
    }
    
    return prev;  
}

int length(ListNode* head){
    if(!head) return 0;
    int length=0;
    ListNode* temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

int  Nth(ListNode* head,int n){
    if(!head) return 0;
    int cnt=0;
    int len=length(head);
    int newN=len-n+1;
    ListNode* temp=head;
    while(head!=NULL && newN==cnt){
        cnt++;
        temp=temp->next;
    }
    return temp->data;



}

ListNode* deleteHead(ListNode* head){
    if(!head || head->next==NULL) return NULL;
    ListNode* temp=head->next;
    head->next=NULL;
    head=temp;
    return head;

}



int main() {
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(30);
    
      int ans = Nth(head,2); 
      cout<<ans<<endl;
      
    // ListNode* cur = head;
    // while (cur != NULL) {
    //     cout << cur->data << " -> ";
    //     cur = cur->next;  
    // }
    // cout << "NULL" << endl;

    return 0;
}
