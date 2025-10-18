#include <bits/stdc++.h>

using namespace std;

// using vector
// TC - O(n + q), SC - O(n)
void character_hashing(string s) {
  vector<int> v(256, 0);
  for (char c: s) {
    v[c]++;
  }
  int q;
  cin >> q;
  while (q--) {
    char curr;
    cin >> curr;
    cout << v[curr - 'a'] << ' ';
  }
}

// using map
// TC - O(n + q), SC - O(n)
void character_hashing(string s) {
  map<char, int> mp; 
  for (char c: s) {
    mp[c]++;
  }
  int q;
  cin >> q;
  while (q--) {
    char curr;
    cin >> curr;
    cout << mp[curr] << ' ';
  } 
}