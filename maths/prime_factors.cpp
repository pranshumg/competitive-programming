#include <bits/stdc++.h>

using namespace std;

/* Prime factors of a number */

bool prime(int n) {
  int cnt = 0;
  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      ++cnt;
      if (n / i != i) {
        ++cnt;
      }
    }
  }
  return cnt == 2;
}

// TC - O(n), SC - O(k) where k is the no. of distinct prime factors
vector<int> prime_factors(int n) {
  vector<int> ans;
  for (int i = 2;  i * i <= n; ++i) {
    if (n % i == 0) {
      if (prime(i)) {
        ans.emplace_back(i);
      }
      if (n / i != i) {
        if (prime(n / i)) {
          ans.emplace_back(n / i);
        }
      }
    }
  }
  return ans;
}

// TC - O(√n), SC - O(k) where k is the no. of distinct prime factors
vector<int> prime_factors(int n) {
  vector<int> ans;
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      ans.emplace_back(i);
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n > 1) {
    ans.emplace_back(n);
  }
  return ans;
}
