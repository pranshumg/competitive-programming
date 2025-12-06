#include <bits/stdc++.h>

using namespace std;

/* Preorder Traversal */

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = nullptr;
    }
};

// TC - O(n), SC - O(n)
void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->val;
    preorder(root->left);
    preorder(root->right);
}