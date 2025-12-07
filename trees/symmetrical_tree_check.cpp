#include <bits/stdc++.h>

using namespace std;

/* Check for symmetrical tree */

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

bool check(Node* l, Node* r) {
    if (l == nullptr || r == nullptr) {
        return l == r;
    }
    if (l->val != r->val) {
        return false;
    }
    return check(l->left, r->right) && check(l->right, r->left);
}

// TC - O(n), SC - O(n)
bool is_symmetric(Node* root) {
    return root == nullptr || check(root->left, root->right); 
}