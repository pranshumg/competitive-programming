#include <bits/stdc++.h>

using namespace std;

/* Max width */

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
int width(Node* root) {
    if (!root) {
        return 0;
    }
    int ans = 0;
    queue<pair<Node*, int>> qe;
    qe.emplace(root, 0);
    while (!qe.empty()) {
        int sz = (int)qe.size();
        int mn = qe.front().second;
        int f, l;
        for (int i = 0; i < sz; ++i) {
            int cur_idx = qe.front().second - mn;
            Node* node = qe.front().first;
            qe.pop();
            if (i == 0) {
                f = cur_idx;
            }
            if (i == sz - 1) {
                l = cur_idx;
            }
            if (node->left) {
                qe.emplace(node->left, cur_idx * 2 + 1);
            }
            if (node->right) {
                qe.emplace(node->right, 2 * cur_idx + 2);
            }
        }
        ans = max(ans, l - f + 1);
    }
    return ans;
}