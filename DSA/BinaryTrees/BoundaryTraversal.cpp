#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Solution {
public:
    bool isLeaf(TreeNode* root) {
        return root && !root->left && !root->right;
    }

    void leftBoundary(TreeNode* root, vector<int>& res) {
        TreeNode* curr = root->left;
        while (curr) {
            if (!isLeaf(curr)) {
                res.push_back(curr->val);
            }
            if (curr->left) {
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }
    }

    void leaves(TreeNode* root, vector<int>& res) {
        if (!root) return;  
        if (isLeaf(root)) {
            res.push_back(root->val);
            return;
        }
        leaves(root->left, res);
        leaves(root->right, res);
    }

    void rightBoundary(TreeNode* root, vector<int>& res) {
        TreeNode* curr = root->right;
        vector<int> temp;
        while (curr) {
            if (!isLeaf(curr)) {
                temp.push_back(curr->val);
            }
            if (curr->right) {
                curr = curr->right;
            } else {
                curr = curr->left;
            }
        }
        for (int i = temp.size() - 1; i >= 0; --i) {
            res.push_back(temp[i]);
        }
    }

    vector<int> boundary(TreeNode* root) {
        vector<int> res;
        if (!root) return res;
        
        if (!isLeaf(root)) {
            res.push_back(root->val);
        }
        
        leftBoundary(root, res);
        leaves(root, res);
        rightBoundary(root, res);
        
        return res;
    }
};


int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->right->left = new TreeNode(8);
    root->left->right->right = new TreeNode(9);
    root->right->left->left = new TreeNode(10);
    root->right->left->right = new TreeNode(11);

    Solution sol;
    vector<int> boundaryTraversal = sol.boundary(root);

    cout << "Boundary Traversal: ";
    for (int val : boundaryTraversal) {
        cout << val << " ";
    }
    cout << endl;

  
    delete root->left->right->left;
    delete root->left->right->right;
    delete root->right->left->left;
    delete root->right->left->right;
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
