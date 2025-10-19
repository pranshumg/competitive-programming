#include <bits/stdc++.h>

using namespace std;

// TC - O(n²)
void selection_sort_rec(vector<int>& v, int i, int n) {
  if (i == n - 1) {
    return;
  }
  int mini_idx = i;
  for (int j = i + 1; j < n; j++) {
    if (v[j] < v[mini_idx]) {
      mini_idx = j;
    }
  }
  swap(v[i], v[mini_idx]);
  selection_sort_rec(v, i + 1, n);
}

