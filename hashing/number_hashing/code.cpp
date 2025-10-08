#include <bits/stdc++.h>

using namespace std;

// using vector
// TC - O(n), SC - O(n)
void number_hashing(vector<int>& v) {
  vector<int> hash(1000000, 0);
  for (auto it: v) {
    hash[it]++;
  }
  int q;
  cin >> q;
  while (q--) {
    int curr;
    cin >> curr;
    cout << hash[curr] << ' ';
  }
}

// using map
// TC - O(n), SC - O(n)
void number_hashing(vector<int>& v) {
  map<int, int> mp;
  for (auto it: v) {
    mp[it]++;
  }
  int q;
  cin >> q;
  while (q--) {
    int curr;
    cin >> curr;
    cout << mp[curr] << ' ';
  } 
}
