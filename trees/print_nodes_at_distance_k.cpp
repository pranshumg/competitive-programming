#include <bits/stdc++.h>

using namespace std;

/* Print all the nodes at a distance of k in binary tree */

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

void mark_parents(Node* root, unordered_map<Node*, Node*>& mp, Node* target) {
    queue<Node*> qe;
    qe.emplace(root);   
    while (!qe.empty()) {
        Node* cur = qe.front();
        qe.pop();
        if (cur->left) {
            mp[cur->left] = cur;
            qe.emplace(cur->left);
        }
        if (cur->right) {
            mp[cur->right] = cur;
            qe.emplace(cur->right);
        }
    }
}

// TC - O(n), SC - O(n)
vector<int> distance(Node* root, Node* target, int k) {
    unordered_map<Node*, Node*> mp;
    mark_parents(root, mp, target);
    unordered_map<Node*, bool> vis;
    queue<Node*> qe; 
    qe.emplace(target);
    vis[target] = true;
    int cur_level = 0;
    while (!qe.empty()) {
        int sz = (int)qe.size();
        if (cur_level++ == k) {
            break;
        }
        for (int i = 0; i < sz; ++i) {
            Node* cur = qe.front();
            qe.pop();
            if (cur->left && !vis[cur->left]) {
                qe.emplace(cur->left);
                vis[cur->left] = true;
            }
            if (cur->right && !vis[cur->right]) {
                qe.emplace(cur->right);
                vis[cur->right] = true;
            }
            if (mp[cur] && !vis[mp[cur]]) {
                qe.emplace(mp[cur]);
                vis[mp[cur]] = true;
            }
        }
    }
    vector<int> ans;
    while (!qe.empty()) {
        Node* cur = qe.front();
        qe.pop();
        ans.emplace_back(cur->val);
    }
    return ans;
}