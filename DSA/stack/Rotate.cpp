#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


int getLength(ListNode* &head) {
    int len = 0;
    ListNode* temp = head;
    while (temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}


ListNode* rotateRight(ListNode* &head, int k) {
    if (head == nullptr || k == 0) {
        return head;
    }
    int length = getLength(head);
    int actualRotateK = k % length;
    if (actualRotateK == 0) {
        return head;
    }
    int newLastNodePOS = length - actualRotateK - 1;
    ListNode* newLastNode = head;
    for (int i = 0; i < newLastNodePOS; i++) {
        newLastNode = newLastNode->next;
    }
    ListNode* newHead = newLastNode->next;
    newLastNode->next = nullptr;
    ListNode* temp = newHead;

    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head;

    return newHead;
}

int main() {
   
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original Linked List: ";
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << std::endl;

  
    int k = 1;
    ListNode* rotatedHead = rotateRight(head, k);

    cout << "Rotated Linked List: ";
    temp = rotatedHead;
    while (temp != nullptr) {
       cout << temp->val << " ";
        temp = temp->next;
    }
    cout << std::endl;

  
    while (rotatedHead != nullptr) {
        ListNode* nextNode = rotatedHead->next;
        delete rotatedHead;
        rotatedHead = nextNode;
    }

    return 0;
}
