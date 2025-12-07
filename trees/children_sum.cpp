#include <bits/stdc++.h>

using namespace std;

/* Children sum property */

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
void reorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    int child = 0;
    if (root->left) {
        child += root->left->val;
    }
    if (root->right) {
        child += root->right->val;
    }
    if (child >= root->val) {
        root->val = child;
    } else {
        if (root->left) {
            root->left->val = root->val;
        }
        if (root->right) {
            root->right->val = root->val;
        }
    }
    reorder(root->left);
    reorder(root->right);
    int total = 0;
    if (root->left) {
        total += root->left->val;
    }
    if (root->right) {
        total += root->right->val;  
    }
    if (root->left || root->right) {
        root->val = total;
    }
}