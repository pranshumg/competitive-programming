#include <bits/stdc++.h>

using namespace std;

/* Lowest common ancestor */

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
Node* lcs(Node* root, Node* a, Node* b) {
    if (root == nullptr || root == a || root == b) {
        return root;
    }
    Node* l = lcs(root->left, a, b);
    Node* r = lcs(root->right, a, b);
    if (l == nullptr) {
        return r;
    } else if (r == nullptr) {
        return l;
    } else {
        return root;
    }
}