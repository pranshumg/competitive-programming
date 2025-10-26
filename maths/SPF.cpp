#include <bits/stdc++.h>

using namespace std;

/* Smallest Prime Factor */

// TC - (n log log n), SC - O(n)
vector<int> SPF(int n) {
  vector<int> ans(n + 1);
  for (int i = 0; i < (int)ans.size(); ++i) {
    ans[i] = i;
  }
  for (int i = 2; i * i <= n; ++i) {
    if (ans[i] == i) {
      for (int j = i * i; j <= n; j += i) {
        if (ans[j] == j) {
          ans[j] = i;
        }
      }
    }
  }
  return ans;
}

// TC - O(log n), SC - O(n)
vector<int> prime_factors(int n) {
  vector<int> ans;
  vector<int> smallest_prime_factors = SPF(n);
  while (n > 1) {
    ans.emplace_back(smallest_prime_factors[n]);
    n /= smallest_prime_factors[n];
  }
  return ans;
}