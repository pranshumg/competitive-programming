#include <bits/stdc++.h>

using namespace std;

/* Row with maximum no. of 1's */

// Linear search
// TC - O(n * m), SC - O(1)
int row(vector<vector<int>> &v, int n, int m) {
  int idx = -1, maxi = 0;
  for (int i = 0; i < n; ++i) {
    int cnt = 0;
    for (int j = 0; j < m; ++j) {
      if (v[i][j] == 1) {
        cnt = m - j;
        break;
      }
    }
    if (cnt > maxi) {
      maxi = cnt, idx = i;
    }
  }
  return idx;
}

// Binary search 
// TC - O(n * log (m)), SC - O(1)
int lower_bound(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] >= target) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return low;
}

int row(vector<vector<int>> &v, int n, int m) {
  int max = 0, idx = -1;
  for (int i = 0; i < n; ++i) {
    int cnt = m - lower_bound(v[i], m, 1);
    if (cnt > max) {
      max = cnt, idx = i;
    }
  }
  return idx;
}