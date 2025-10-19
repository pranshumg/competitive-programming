#include <bits/stdc++.h>

using namespace std;

/* Leaders in an array */
// Brute (TC - O(n²), SC - O(n))
vector<int> leaders(vector<int>& v, int n) {
  vector<int> res;
  for (int i = 0; i < n; i++) {
    bool flag = true;
    for (int j = i + 1; j < n; j++) {
      if (v[j] > v[i]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      res.push_back(v[i]);
    }
  }
  return res;
}

// Optimal (TC - O(n), SC - O(n))
vector<int> leaders(vector<int>& v, int n) {
  vector<int> res;
  int maxi = INT_MIN;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i] > maxi) {
      res.push_back(v[i]);
      maxi = v[i];
    }
  }
  reverse(res.begin(), res.end());
  return res;
}
