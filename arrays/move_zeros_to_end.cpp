#include <bits/stdc++.h>

using namespace std;

/* Move zeros to end */
// Brute (TC - O(n), SC - O(n))
void move_zeros_to_end(vector<int>& v, int n) {
  vector<int> temp;
  for (int i = 0; i < n; i++) {
    if (v[i] != 0) {
      temp.push_back(v[i]);
    }
  }
  for (int i = 0; i < (int)temp.size(); i++) {
    v[i] = temp[i];
  }
  for (int i = (int)temp.size(); i < n; i++) {
    v[i] = 0;
  }
}

// Optimal (TC - O(n), SC - O(1))
void move_zeros_to_end(vector<int>& v, int n) {
  int j = -1;
  for (int i = 0; i < n; i++) {
    if (v[i] == 0) {
      j = i;
      break;
    }
  }
  if (j == -1) {
    return;
  }
  for (int i = j + 1; i < n; i++) {
    if (v[i] != 0) {
      swap(v[i], v[j++]);
    }
  }
}
