#include <bits/stdc++.h>

using namespace std;

/* N Queens */

void solve(int col, vector<string>& board, vector<vector<string>>& ans, vector<int>& left_r, vector<int>& upper_diag, vector<int>& lower_diag, int n) {
  if (col == n) {
    ans.emplace_back(board);
    return;
  }
  for (int row = 0; row < n; ++row) {
    if (left_r[row] == 0 && lower_diag[row + col] == 0 && upper_diag[n - 1 + col - row] == 0) {
      board[row][col] = 'Q';
      left_r[row] = 1;
      lower_diag[row + col] = 1;
      upper_diag[n - 1 + col - row] = 1;
      solve(col + 1, board, ans, left_r, upper_diag, lower_diag, n);
      board[row][col] = '.';
      left_r[row] = 0;
      lower_diag[row + col] = 0;
      upper_diag[n - 1 + col - row] = 0;
    }
  }
}

vector<vector<string>> N_Queens(int n) {
  vector<vector<string>> ans;
  vector<string> board(n, string(n, '.'));
  vector<int> left_r(n, 0), lower_diag(2 * n - 1, 0), upper_diag(2 * n - 1, 0);
  solve(0, board, ans, left_r, upper_diag, lower_diag, n);
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<vector<string>> ans = N_Queens(n);
  for (int i = 0; i < (int)ans.size(); ++i) {
    cout << "Solution: " << i + 1 << '\n';
    for (int j = 0; j < (int)ans[i].size(); ++j) {
      cout << ans[i][j] << '\n';
    }
    cout << '\n';
  }
  return 0;
}