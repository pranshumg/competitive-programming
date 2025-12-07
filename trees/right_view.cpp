#include <bits/stdc++.h>

using namespace std;

/* Right view */

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

void solve(Node* root, int level, vector<int>& ans) {
    if (!root) {
        return;
    }
    if (ans.size() == level) {
        ans.emplace_back(root->val);
    }
    solve(root->right, level + 1, ans);
    solve(root->left, level + 1, ans);
}

// TC - O(n), SC - O(n)
vector<int> right_view(Node* root) {
    vector<int> ans;
    solve(root, 0, ans);
    return ans;
}