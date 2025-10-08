#include <bits/stdc++.h>

using namespace std;

/* Next permutation */
// STL (TC - O(n), SC - O(1))
void Next_permutation(vector<int>& v, int n) {
  next_permutation(v.begin(), v.end());
}

// Optimal (TC - O(n), SC - O(1))
void Next_permutation(vector<int>& v, int n) {
  int idx = -1;
  for (int i = n - 2; i >= 0; i--) {
    if (v[i] < v[i + 1]) {
      idx = i;
      break;
    }
  }
  if (idx == -1) {
    reverse(v.begin(), v.end());
    return;
  }
  for (int i = n - 1; i > idx; i--) {
    if (v[i] > v[idx]) {
      swap(v[i], v[idx]);
      break;
    }
  }
  reverse(v.begin() + idx + 1, v.end());
}
