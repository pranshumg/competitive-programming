#include <bits/stdc++.h>

using namespace std;

/* Bottom view */

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

// TC - O(n log n), SC - O(n)
vector<int> bottom_view(Node* root) {
    vector<int> ans;
    if (!root) { 
        return ans;
    }
    map<int, int> mp;
    queue<pair<Node*, int>> qe;
    qe.emplace(root, 0);
    while (!qe.empty()) {
        auto it = qe.front();
        qe.pop();
        Node* node = it.first;
        int line = it.second;
        mp[line] = node->val;
        if (node->left) {
            qe.emplace(node->left, line - 1);
        }
        if (node->right) {
            qe.emplace(node->right, line + 1);
        }
    }
    for (auto &it : mp) {
        ans.emplace_back(it.second);
    }
    return ans;
}