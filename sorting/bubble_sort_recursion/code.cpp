#include <bits/stdc++.h>

using namespace std;

// Best TC - O(n)
// Worst TC - O(n²)
void bubble_sort_rec(vector<int>& v, int i, int n) {
  if (i == n - 1) {
    return;
  }
  int did_swap = 0;
  for (int j = 0; j < n - 1 - i; j++) {
    if (v[j] > v[j + 1]) {
      swap(v[j], v[j + 1]);
      did_swap = 1;
    }
  }
  if (!did_swap) {
    return;
  }
  bubble_sort_rec(v, i + 1, n);
}

