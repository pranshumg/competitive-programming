#include <bits/stdc++.h>

using namespace std;

/* Celebrity problem */

// TC - O(n * n), SC - O(n)
int celebrity(vector<vector<int>>& v) {
  int n = (int)v.size();
  vector<int> i_know(n, 0), know_me(n, 0);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (v[i][j] == 1) {
        ++i_know[i];
        ++know_me[j];
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    if (i_know[i] == 0 && know_me[i] == n - 1) {
      return i;
    }
  }
  return -1;
}

// TC - O(n), SC - O(1)
int celebrity(vector<vector<int>>& v) {
  int n = (int)v.size();
  int top = 0, down = n - 1;
  while (top < down) {
    if (v[top][down] == 1) {
      ++top;
    } else if (v[down][top] == 1) {
      --down;
    } else {
      ++top, --down;
    }
  }
  if (top > down) {
    return -1;
  }
  for (int i = 0; i < n; ++i) {
    if (i == top) {
      continue;
    }
    if (v[top][i] == 0 && v[i][top] == 1) {
      continue;
    } else {
      return -1;
    }
  }
  return top;
}