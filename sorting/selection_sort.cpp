#include <bits/stdc++.h>

using namespace std;

// TC - O(n²)
void selection_sort(vector<int>& v, int n) {
  for (int i = 0; i < n - 1; i++) {
    int mini_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (v[j] < v[mini_idx]) {
        mini_idx = j;
      }
    }
    swap(v[i], v[mini_idx]);
  }
}

