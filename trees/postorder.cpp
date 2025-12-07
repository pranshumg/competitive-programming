#include <bits/stdc++.h>

using namespace std;

/* Postorder Traversal */

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
void postorder_rec(Node* root) {
    if (root == nullptr) {
        return;
    }
    postorder_rec(root->left);
    postorder_rec(root->right);
    cout << root->val;
}

// Iterative (using 2 stack)
// TC - O(n), SC - O(n)
vector<int> postorder(Node* root) {
    vector<int> ans;
    if (root == nullptr) {
        return ans;
    }
    stack<Node*> sk1, sk2;
    sk1.emplace(root);
    while (!sk1.empty()) {
        root = sk1.top();
        sk1.pop();
        sk2.emplace(root);
        if (root->left != nullptr) {
            sk1.emplace(root->left);
        }
        if (root->right != nullptr) {
            sk2.emplace(root->right);
        }
    }
    while (!sk2.empty()) {
        ans.emplace_back(sk2.top()->val);
        sk2.pop();
    }
    return ans;
}

// Iterative (using 1 stack)
// TC - O(n), SC - O(n)
vector<int> postorder(Node* root) {
    vector<int> ans;
    if (root == nullptr) {
        return ans;
    }
    stack<Node*> sk;
    Node* cur = root;
    while (cur != nullptr || !sk.empty()) {
        if (cur != nullptr) {
            sk.emplace(cur);
            cur = cur->left;
        } else {
            Node* tmp = sk.top()->right;
            if (tmp == nullptr) {
                tmp = sk.top();
                sk.pop();
                ans.emplace_back(tmp->val);
                while (!sk.empty() && tmp == sk.top()->right) {
                    tmp = sk.top();
                    sk.pop();
                    ans.emplace_back(tmp->val);
                }
            } else {
                cur = tmp;
            }
        }
    }
    return ans;
}