#include <bits/stdc++.h>

using namespace std;

/* Print Pascal Triangle */
// Brute (TC - O(r³), SC - O(1))
int64_t nCr(int n, int r) {
  int64_t res = 1;
  for (int i = 0; i < r; i++) {
    res = res * (n - i);
    res = res / (i + 1);
  }
  return res;
}

vector<vector<int>> generate(int r) {
  vector<vector<int>> ans;
  for (int row = 0; row < r; row++) {
    vector<int> tmp;
    for (int col = 0; col <= row; col++) {
      tmp.push_back(nCr(row, col));
    }
    ans.push_back(tmp);
  }
  return ans;
}

// Optimal (TC - O(n²), SC - O(1))
vector<int> generate_row(int r) {
  vector<int> row;
  int64_t ans = 1;
  row.push_back(1);
  for (int col = 1; col < r; col++) {
    ans = ans * (r - col);
    ans = ans / col;
    row.push_back(ans);
  }
  return row;
}

vector<vector<int>> generate(int r) {
  vector<vector<int>> ans;
  for (int row = 1; row <= r; row++) {
    ans.push_back(generate_row(row));
  }
  return ans;
}
