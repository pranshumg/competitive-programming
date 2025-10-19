#include <bits/stdc++.h>

using namespace std;

/* Subarrays with XOR target */
// Brute (TC - O(n^3), SC - O(1))
int subarrays(vector<int>& v, int n, int target) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int XOR = 0;
      for (int k = i; k <= j; k++) {
        XOR ^= v[k];
      }
      if (XOR == target) {
        cnt++;
      }
    }
  }
  return cnt;
}

// Better (TC - O(n^2), SC - O(1))
int subarrays(vector<int>& v, int n, int target) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int XOR = 0;
    for (int j = i; j < n; j++) {
      XOR ^= v[j];
      if (XOR == target) {
        cnt++;
      }
    }
  }
  return cnt;
}

// Optimal (TC - O(n), SC - O(n))
int subarrays(vector<int>& v, int n, int target) {
  int cnt = 0, XOR = 0;
  unordered_map<int, int> mp;
  mp[0] = 1;
  for (int i = 0; i < n; i++) {
    XOR ^= v[i];
    cnt += mp[XOR ^ target];
    mp[XOR]++;
  }
  return cnt;
}
