#include <bits/stdc++.h>

using namespace std;

/* Max path sum */

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

int max_path_down(Node* root, int& mx) {
    if (root == nullptr) {
        return 0;
    }
    int l = max(0, max_path_down(root->left, mx));
    int r = max(0, max_path_down(root->right, mx));
    mx = max(mx, root->val + l + r);
    return root->val + max(l, r);
}

// TC - O(n), SC - O(n)
int max_path_sum(Node* root) {
    int mx = INT_MIN;
    max_path_down(root, mx);
    return mx;
}