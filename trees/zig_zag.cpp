#include <bits/stdc++.h>

using namespace std;

/* Zig Zag or Spiral traversal */

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
vector<vector<int>> zig_zag(Node* root) {
    vector<vector<int>> ans;
    if (root == nullptr) {
        return ans;
    }
    queue<Node*> qe;
    qe.emplace(root);
    bool lr = true;
    while (!qe.empty()) {
        int sz = (int)qe.size();
        vector<int> row(sz);
        for (int i = 0; i < sz; ++i) {
            Node* node = qe.front();
            qe.pop();
            int idx = lr ? i : sz - 1 - i;
            row[idx] = node->val;
            if (node->left) {
                qe.emplace(node->left);
            }
            if (node->right) {
                qe.emplace(node->right);
            }
        }
        lr = !lr;
        ans.emplace_back(row);
    }
    return ans;
}