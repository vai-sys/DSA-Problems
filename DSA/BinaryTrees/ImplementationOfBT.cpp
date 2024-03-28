#include<iostream>
using namespace std;

// Node class for the binary tree
class node {
public:
    int data;
    node* left;
    node* right;
    // Constructor to initialize node with given data
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    // Destructor to deallocate memory
    ~node() {
        delete left;
        delete right;
    }
};

// Function to create a binary tree
node* createTree() {
    cout << "Enter node (-1 to terminate): " << endl;
    int data;
    cin >> data;
    // If user inputs -1, return NULL indicating termination of branch
    if (data == -1)
        return NULL;
    // Create a new node with the entered data
    node* newnode = new node(data);
    // Recursively create left and right subtrees
    newnode->left = createTree();
    newnode->right = createTree();
    return newnode; // Return the new node
}

// Main function
int main() {
    // Create the binary tree
    node* root = createTree();

    // Perform any operations on the tree here

    // Deallocate memory
    delete root;

    return 0;
}

