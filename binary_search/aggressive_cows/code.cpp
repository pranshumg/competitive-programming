#include <bits/stdc++.h>

using namespace std;

/* Aggressive cows */
// TC - O(n), SC - O(1)
bool check(vector<int>& v, int dist, int cows) {
  int cnt_cows = 1, last = v[0];
  for (int i = 1; i < (int)v.size(); ++i) {
    if (v[i] - last >= dist) {
      cnt_cows++, last = v[i];
    }
    if (cnt_cows >= cows) {
      return true;
    } 
  }
  return false;
}

// Linear search 
// TC - O(n log n + n * (max(v) - min(v))), SC - O(1)
int distance_linear(vector<int>& v, int n, int cows) {
  sort(v.begin(), v.end());
  int maxi = v[n - 1], mini = v[0];
  for (int i = 1; i <= maxi - mini; ++i) {
    if (!check(v, i, cows)) {
      return i - 1;
    } 
  }
  return maxi - mini;
}

// Binary search 
// TC - O(n log n + n * log(max(v) - min(v))), SC - O(1)
int distance_binary(vector<int>& v, int n, int cows) {
  sort(v.begin(), v.end());
  int low = 1, high = v[n - 1] - v[0];
  while (low <= high) {
    int mid = (low + high) / 2;
    if (check(v, mid, cows)) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high;
}
