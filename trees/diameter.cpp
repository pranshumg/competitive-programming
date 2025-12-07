#include <bits/stdc++.h>

using namespace std;

/* Diameter */

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

int height(Node* root, int& d) {
    if (root == nullptr) {
        return 0;
    }
    int lh = height(root->left, d);
    int rh = height(root->right, d);
    d = max(d, lh + rh);
    return 1 + max(lh, rh);
}

// TC - O(n), SC - O(n)
int diameter(Node* root) {
    int d = 0;
    height(root, d);
    return d;
}