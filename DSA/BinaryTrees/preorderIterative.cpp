#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node* root) {
    if (root == NULL) return;
    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* curr = st.top();
        st.pop();
        cout << curr->data << " ";

        if (curr->right != NULL) st.push(curr->right);
        if (curr->left != NULL) st.push(curr->left);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Pre-order Traversal: ";
    preorder(root);
    cout << endl;

    return 0;
}
