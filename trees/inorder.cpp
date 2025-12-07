#include <bits/stdc++.h>

using namespace std;

/* Inorder Traversal */

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
void inorder_rec(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorder_rec(root->left);
    cout << root->val;
    inorder_rec(root->right);
}

// Iterative
// TC - O(n), SC - O(n)
vector<int> inorder(Node* root) {
    stack<Node*> sk;
    Node* node = root;
    vector<int> ans;
    while (true) {
        if (node != nullptr) {
            sk.emplace(node);
            node = node->left;
        } else {
            if (sk.empty()) {
                break;
            }
            node = sk.top();
            sk.pop();
            ans.emplace_back(node->val);
            node = node->right;
        }
    }
    return ans;
}