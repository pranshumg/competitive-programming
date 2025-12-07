#include <bits/stdc++.h>

using namespace std;

/* Boundary Traversal */

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

bool is_leaf(Node* root) {
    return (!root->left && !root->right);
}

void left_boundary(Node* root, vector<int>& ans) {
    Node* cur = root->left;
    while (cur) {
        if (!is_leaf(cur)) {
            ans.emplace_back(cur->val);
        }
        if (cur->left) {
            cur = cur->left;
        } else {
            cur = cur->right;
        }
    }
}

void right_boundary(Node* root, vector<int>& ans) {
    Node* cur = root->right;
    vector<int> tmp;
    while (cur) {
        if (!is_leaf(cur)) {
            tmp.emplace_back(cur->val);
        }
        if (cur->right) {
            cur = cur->right;
        } else {
            cur = cur->left;
        }
    }
    for (int i = (tmp).size() - 1; i >= 0; --i) {
        ans.emplace_back(tmp[i]);
    }
}

void leaves(Node* root, vector<int>& ans) {
    if (is_leaf(root)) {
        ans.emplace_back(root->val);
        return;
    }
    if (root->left) {
        leaves(root->left, ans);
    }
    if (root->right) {
        leaves(root->right, ans);
    }
}

// TC - O(n), SC - O(n)
vector<int> boundary(Node* root) {
    vector<int> ans;
    if (!root) {
        return ans;
    }
    if (!is_leaf(root)) {
        ans.emplace_back(root->val);
    }
    left_boundary(root, ans);
    leaves(root, ans);
    right_boundary(root, ans);
    return ans;
}