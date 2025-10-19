#include <bits/stdc++.h>

using namespace std;

/* Sort characters by frequency */

// TC - O(n), SC - O(n)
bool comp(pair<char, int> p1, pair<char, int> p2) {
  return p1.second > p2.second;
}

string freq_sort(string s) {
  vector<pair<char, int>> vp(123);
  for (auto it: s) {
    vp[it].second++, vp[it].first = it;
  }
  sort(vp.begin(), vp.end(), comp);
  string res = "";
  for (auto it: vp) {
    if (it.second > 0) {
      char c = it.first;
      int freq = it.second;
      res += string(freq, c);
    }
  }
  return res;
}