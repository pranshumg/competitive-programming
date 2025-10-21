#include <bits/stdc++.h>

using namespace std;

/* Seive of Eratosthenes */

// TC - O(n log log n), SC - O(n)
vector<int> seive(int n) {
  vector<bool> is_prime(n + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= n; ++i) {
    if (is_prime[i]) {
      for (int j = i * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
  vector<int> primes;
  for (int i = 2; i <= n; ++i) {
    if (is_prime[i]) {
      primes.emplace_back(i);
    }
  }
  return primes;
}