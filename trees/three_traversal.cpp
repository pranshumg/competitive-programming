#include <bits/stdc++.h>

using namespace std;

/* Preorder, Inorder, Postorder traversal in one traversal */

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
vector<vector<int>> traversal(Node* root) {
    stack<pair<Node*, int>> sk;
    sk.emplace(root, 1);
    vector<int> pre, in, post;
    if (root == nullptr) {
        return {{}, {}, {}};
    }
    while (!sk.empty()) {
        auto it = sk.top();
        sk.pop();
        // this is part of preorder
        if (it.second == 1) {
            pre.emplace_back(it.first->val);
            ++it.second;
            sk.emplace(it);
            if (it.first->left != nullptr) {
                sk.emplace(it.first->left, 1);
            }
        }
        // this is part of inorder
        else if (it.second == 2) {
            in.emplace_back(it.first->val);
            ++it.second;
            sk.emplace(it);
            if (it.first->right != nullptr) {
                sk.emplace(it.first->right, 1);
            }
        } else {
            post.emplace_back(it.first->val);
        }
    }
    return {pre, in, post};
}