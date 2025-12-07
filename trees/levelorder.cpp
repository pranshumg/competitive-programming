#include <bits/stdc++.h>

using namespace std;

/* Levelorder Traversal */

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
vector<vector<int>> levelorder(Node* root) {
    vector<vector<int>> ans;
    if (root == nullptr) {
        return ans;
    }
    queue<Node*> qe;
    qe.emplace(root);
    while (!qe.empty()) {
        int size = (int)qe.size();
        vector<int> level;
        for (int i = 0; i < size; ++i) {
            Node* node = qe.front();
            qe.pop();
            if (node->left != nullptr) {
                qe.emplace(node->left);
            }
            if (node->right != nullptr) {
                qe.emplace(node->right);
            }
            level.emplace_back(node->val);
        }
        ans.emplace_back(level);
    }
    return ans;
}