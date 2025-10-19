#include <bits/stdc++.h>

using namespace std;

/* Spiral Traversal */
// TC - O(n*m), SC - O(n*m)
vector<int> spiral(vector<vector<int>>& v, int n, int m) {
  int top = 0, bottom = n - 1, left = 0, right = m - 1;
  vector<int> ans;
  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; i++) {
      ans.push_back(v[top][i]);
    }
    top++;
    for (int i = top; i <= bottom; i++) {
      ans.push_back(v[i][right]);
    }
    right--;
    if (top <= bottom) {
      for (int i = right; i >= left; i--) {
        ans.push_back(v[bottom][i]);
      }
      bottom--;
    }
    if (left <= right) {
      for (int i = bottom; i >= top; i--) {
        ans.push_back(v[i][left]);
      }
      left++;
    }
  }
  return ans;
}
