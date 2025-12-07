#include <bits/stdc++.h>

using namespace std;

/* Check for balanced binary tree */

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

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int lh = height(root->left);
    if (lh == -1) {
        return -1;
    }
    int rh = height(root->right);
    if (rh == -1) {
        return -1;
    }
    if (abs(lh - rh) > 1) {
        return -1;
    }
    return max(lh, rh) + 1;
}

// TC - O(n), SC - O(n)
bool is_balanced(Node* root) {
    return height(root) != -1;
}