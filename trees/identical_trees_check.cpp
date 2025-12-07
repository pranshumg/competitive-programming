#include <bits/stdc++.h>

using namespace std;

/* Check if two trees are identical or not */

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
bool is_same_tree(Node* p, Node* q) {
    if (p == nullptr || q == nullptr) {
        return p == q;
    }
    return (p->val == q->val) && is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
}