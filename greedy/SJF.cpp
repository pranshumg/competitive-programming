#include <bits/stdc++.h>

using namespace std;

/* Shorted Job First CPU scheduling */

// TC - O(n log n), SC - O(1)
int average(vector<int>& v) {
  int n = (int)v.size();  
  sort(v.begin(), v.end());
  int t = 0, wt = 0;
  for (auto &it : v) {
    wt += t;
    t += it;
  }
  return wt / n;
}