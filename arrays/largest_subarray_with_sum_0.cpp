#include <bits/stdc++.h>

using namespace std;

/* Largest subarray with sum 0 */
// Brute (TC - O(n3), SC - O(1))
int largest_subarray(vector<int>& v, int n) {
  int longest = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum += v[k];
      }
      if (sum == 0) {
        longest = max(longest, j - i + 1);
      }
    }
  }
  return longest;
}

// Better (TC - O(n2), SC - O(1))
int largest_subarray(vector<int>& v, int n) {
  int longest = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += v[j];
      if (sum == 0) {
        longest = max(longest, j - i + 1);
      }
    }
  }
  return longest;
}

// Optimal (TC - O(n), SC - O(n))
int largest_subarray(vector<int>& v, int n) {
  int longest = 0, sum = 0;
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    if (sum == 0) {
      longest = i + 1;
    }
    if (mp.find(sum) != mp.end()) {
      longest = max(longest, i - mp[sum]);
    } else {
      mp[sum] = i;
    }
  }
  return longest;
}
