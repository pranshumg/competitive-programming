#include <bits/stdc++.h>

using namespace std;

/* Vertical Order Traversal */

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
vector<vector<int>> vertical(Node* root) {
    map<int, map<int, multiset<int>>> mp;
    queue<pair<Node*, pair<int, int>>> qe;
    qe.emplace(root, 0, 0);
    while (!qe.empty()) {
        auto it = qe.front();
        qe.pop();
        Node* node = it.first;
        int x = it.second.first, y = it.second.second;
        mp[x][y].emplace(node->val);
        if (node->left) {
            qe.emplace(node->left, x - 1, y + 1);
        } 
        if (node->right) {
            qe.emplace(node->right, x + 1, y + 1);
        }
    }
    vector<vector<int>> ans;
    for (auto &it1 : mp) {
        vector<int> col;
        for (auto &it2 : it1.second) {
            col.insert(col.end(), it2.second.begin(), it2.second.end());
        }
        ans.emplace_back(col);
    }
    return ans;
}