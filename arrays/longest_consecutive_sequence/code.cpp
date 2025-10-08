#include <bits/stdc++.h>

using namespace std;

/* Longest consecutive sequence */

bool linear_search(vector<int>& v, int k) {
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] == k) {
      return true;
    }
  }
  return false;
}

// Brute (TC - O(n²), SC - O(1))
int longest_sequence(vector<int>& v, int n) {
  int longest = 1;
  for (int i = 0; i < n; i++) {
    int cnt = 1, el = v[i];
    while (linear_search(v, el + 1)) {
      el++, cnt++;
    }
    longest = max(longest, cnt);
  }
  return longest;
}

// Better (TC - O(n log n), SC - O(1))
int longest_sequence(vector<int>& v, int n) {
  sort(v.begin(), v.end());
  int longest = 1, cnt = 0, last_smaller = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (v[i] - 1 == last_smaller) {
      cnt++, last_smaller = v[i];
    } else if (v[i] != last_smaller) {
      cnt = 1, last_smaller = v[i];
    }
    longest = max(longest, cnt);
  }
  return longest;
}

// Optimal (TC - O(n), SC - O(n))
int longest_sequence(vector<int>& v, int n) {
  if (n == 0) {
    return 0;
  }
  int longest = 1;
  unordered_set<int> st;
  for (int i = 0; i < n; i++) {
    st.insert(v[i]);
  }
  for (auto it : st) {
    if (st.find(it - 1) == st.end()) {
      int el = it, cnt = 1;
      while (st.find(el + 1) != st.end()) {
        el++, cnt++;
      }
      longest = max(longest, cnt);
    }
  }
  return longest;
}
