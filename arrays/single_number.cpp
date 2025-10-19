#include <bits/stdc++.h>

using namespace std;

/* Brute Force Approach */
// TC - O(n²), SC - O(1)
int single_number_brute(vector<int>& v, int n) {
  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (v[i] == v[j]) cnt++;
    }
    if (cnt == 1) return v[i];
  }
  return -1; // in case no single number exists
}

/* Better Approach using Hash Map */
// TC - O(n), SC - O(n)
int single_number_better(vector<int>& v, int n) {
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) mp[v[i]]++;
  for (auto it : mp) {
    if (it.second == 1) return it.first;
  }
  return -1;
}

/* Optimal Approach using XOR */
// TC - O(n), SC - O(1)
int single_number_optimal(vector<int>& v, int n) {
  int XOR = 0;
  for (int i = 0; i < n; i++) XOR ^= v[i];
  return XOR;
}
