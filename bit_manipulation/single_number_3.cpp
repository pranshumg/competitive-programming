#include <bits/stdc++.h>

using namespace std;

/* Single number - 3 */

// TC - O(n log m + m), SC - O(m) where m is the size of map
vector<int> single_number(vector<int>& v) {
  int n = (int)v.size();
  map<int, int> mp;
  for (auto it: v) {
    mp[it]++;
  }
  vector<int> ans;
  for (auto it: mp) {
    if (it.second == 1) {
      ans.emplace_back(it.first);
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
vector<int> single_number(vector<int> &v) {
  int64_t XOR = 0;
  for (auto it: v) {
    XOR ^= it;
  }
  int rightmost = XOR ^ -XOR;
  int bucket1 = 0, bucket2 = 0;
  for (auto it: v) {
    if (it & rightmost) {
      bucket1 ^= it;
    } else {
      bucket2 ^= it;
    }
  }
  return {bucket1, bucket2};
}