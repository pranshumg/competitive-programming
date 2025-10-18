#include <bits/stdc++.h>

using namespace std;

/* Helper functions */
void mark_row(vector<vector<int>>& v, int i, int m) {
  for (int j = 0; j < m; j++) {
    if (v[i][j] != 0) v[i][j] = -1;
  }
}

void mark_col(vector<vector<int>>& v, int j, int n) {
  for (int i = 0; i < n; i++) {
    if (v[i][j] != 0) v[i][j] = -1;
  }
}

/* Brute Force Approach */
// TC - O(n*m*(n+m)), SC - O(1)
void set_zero_brute(vector<vector<int>>& v, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == 0) {
        mark_row(v, i, m);
        mark_col(v, j, n);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == -1) v[i][j] = 0;
    }
  }
}

/* Better Approach */
// TC - O(n*m), SC - O(n+m)
void set_zero_better(vector<vector<int>>& v, int n, int m) {
  vector<int> row(n, 0), col(m, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == 0) {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (row[i] || col[j]) v[i][j] = 0;
    }
  }
}

/* Optimal Approach */
// TC - O(n*m), SC - O(1)
void set_zero_optimal(vector<vector<int>>& v, int n, int m) {
  int col0 = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == 0) {
        v[i][0] = 0;
        if (j != 0) v[0][j] = 0;
        else col0 = 0;
      }
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (v[i][0] == 0 || v[0][j] == 0) v[i][j] = 0;
    }
  }
  if (v[0][0] == 0) {
    for (int j = 0; j < m; j++) v[0][j] = 0;
  }
  if (col0 == 0) {
    for (int i = 0; i < n; i++) v[i][0] = 0;
  }
}
