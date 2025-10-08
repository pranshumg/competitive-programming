#include <bits/stdc++.h>

using namespace std;

/* Intersection of two sorted arrays */
// Brute (TC - O(n * m), SC - O(min(n, m)))
vector<int> intersection(vector<int>& v1, vector<int>& v2) {
  int n = (int)v1.size(), m = (int)v2.size();
  vector<int> ans, visited(min(n, m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v1[i] == v2[j] && visited[j] == 0) {
        ans.push_back(v1[i]);
        visited[j] = 1;
        break;
      }
      if (v2[j] > v1[i]) {
        break;
      }
    }
  }
  return ans;
}

// Optimal (TC - O(n + m), SC - O(1))
vector<int> intersection(vector<int>& v1, vector<int>& v2) {
  int n = (int)v1.size(), m = (int)v2.size(), i = 0, j = 0;
  vector<int> ans;
  while (i < n && j < m) {
    if (v1[i] > v2[j]) {
      j++;
    } else if (v1[i] < v2[j]) {
      i++;
    } else {
      ans.push_back(v1[i]);
      i++, j++;
    }
  }
  return ans;
}
