#include <bits/stdc++.h>

using namespace std;

/* Maximum depth */

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
int max_depth(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    int lh = max_depth(root->left);
    int rh = max_depth(root->right);
    return 1 + max(lh, rh);
}