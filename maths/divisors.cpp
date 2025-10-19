#include <bits/stdc++.h>

using namespace std;

/* Divisors */
// Method 1
// TC - O(n)
void divisors(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cout << i << ' ';
    }
  }
  cout << '\n';
}

// Method 2
// TC - O(√n log n)
void divisors(int n) {
  vector<int> v;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      v.push_back(i);
      if (n / i != i) {
        v.push_back(n / i);
      }
    }
  }
  sort(v.begin(), v.end());
  for (auto it: v) {
    cout << it << ' ';
  }
  cout << '\n';
}
