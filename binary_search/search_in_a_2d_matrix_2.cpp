#include <bits/stdc++.h>

using namespace std;

/* Search in a 2D matrix - 2 */

// Linear search
// TC - O(n * m), SC - O(1)
bool search(vector<vector<int>> &v, int n, int m, int target) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (v[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

// Binary search
// Better
bool binary_search(vector<int> &v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] == target) {
      return true;
    } else if (v[mid] > target) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return false;
}

// TC - O(n * log(m)), SC - O(1)
bool search(vector<vector<int>> &v, int n, int m, int target) {
  for (int i = 0; i < n; ++i) {
    if (binary_search(v[i], m, target)) {
      return true;
    }
  }
  return false;
}

// Optimal
// TC - O(n + m), SC - O(1)
bool search(vector<vector<int>> &v, int n, int m, int target) {
  int row = 0, col = m - 1;
  while (row < n && col >= 0) {
    if (v[row][col] == target) {
      return true;
    } else if (v[row][col] > target) {
      col--;
    } else {
      row++;
    }
  }
  return false;
}