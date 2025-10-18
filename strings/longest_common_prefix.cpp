#include <bits/stdc++.h>

using namespace std;

/* Longest common prefix */

// Brute
// TC - O(n * m), SC - o(m)
string prefix(vector<string> vs) {
  string ans = "";
  for (int i = 0; i < (int)vs[0].size(); ++i) {
    bool flag = true;
    for (int j = 1; j < (int)vs.size(); ++j) {
      if (i >= (int)vs[j].size() || vs[0][i] != vs[j][i]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      ans += vs[0][i];
    } else {
      break;
    }
  }
  return ans;
}


// Optimal
// TC - O(n * m * log n), SC - O(m)
string prefix(vector<string> vs) {
  sort(vs.begin(), vs.end());
  string ans = "";
  for (int i = 0; i < (int)vs[0].size(); ++i) {
    if (vs[0][i] != vs[(int)vs.size() - 1][i]) {
      break;
    }
    ans += vs[0][i];
  }
  return ans;
}