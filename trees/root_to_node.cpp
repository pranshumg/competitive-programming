#include <bits/stdc++.h>

using namespace std;

/* Root to node path */

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

bool get_path(Node* root, vector<int>& v, int x) {
    if (!root) {
        return false;
    }
    v.emplace_back(root->val);
    if (root->val == x) {
        return true;
    }
    if (get_path(root->left, v, x) || get_path(root->right, v, x)) {
        return true;
    }
    v.pop_back();
    return false;
}

// TC - O(n), SC - O(n)
vector<int> path(Node* root, int x) {
    vector<int> ans;
    if (!root) {
        return ans;
    }
    get_path(root, ans, x);
    return ans;
}