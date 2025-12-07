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

// Recursive
// TC - O(n), SC - O(n)
void preorder_rec(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->val;
    preorder_rec(root->left);
    preorder_rec(root->right);
}

// Iterative
// TC - O(n), SC - O(n)
vector<int> preorder(Node* root) {
    vector<int> ans;
    if (root == nullptr) {
        return ans;
    }
    stack<Node*> sk;
    sk.emplace(root);
    while (!sk.empty()) {
        root = sk.top();
        sk.pop();
        ans.emplace_back(root->val);
        if (root->right != nullptr) {
            sk.emplace(root->right);
        }
        if (root->left != nullptr) {
            sk.emplace(root->left);
        }
    }
    return ans;
}