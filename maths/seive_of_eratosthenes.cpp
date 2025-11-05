#include <bits/stdc++.h>

using namespace std;

/* Seive of Eratosthenes */

// TC - O(n log log n), SC - O(n)
vector<int> seive(int n) {
  vector<int> is_prime(n + 1, 1);
  is_prime[0] = is_prime[1] = 0;
  for (int i = 2; i * i <= n; ++i) {
    if (is_prime[i]) {
      for (int j = i * i; j <= n; j += i) {
        is_prime[j] = 0;
      }
    }
  }
  return is_prime;
}