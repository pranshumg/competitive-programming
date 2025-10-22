#include <bits/stdc++.h>

using namespace std;

/* Count primes in a range L - R */

bool is_prime(int n) {
  int cnt = 0;
  for (int i = 1; i * i <= n; ++i) {
    if (!(n % i)) {
      ++cnt;
      if (n / i != i) {
        ++cnt;
      }
    }
  }
  return cnt == 2;
}

vector<int> sieve(int n) {
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

// TC - O((R - L + 1) * √n), SC - O(1);
int count_primes(int L, int R) {
  int cnt = 0;
  for (int i = L; i <= R; ++i) {
    if (is_prime(i)) {
      ++cnt;
    }
  }
  return cnt;
}

// TC - O(1e6 log log 1e6 + (R - L + 1)), SC - (1e6)
int count_primes(int L, int R) {
  vector<int> primes = sieve((int)1e6);
  int cnt = 0;
  for (int i = L; i <= R; ++i) {
    if (primes[i]) {
      ++cnt;
    }
  }
  return cnt;
}

// TC - (1e6 log log 1e6 + 1e6), SC - O(1e6)
int count_primes(int L, int R) {
  vector<int> primes = sieve((int)1e6);
  int cnt = 0;
  for (int i = 0; i < (int)primes.size(); ++i) {
    cnt += primes[i];
    primes[i] = cnt;
  }
  return primes[R] - primes[L - 1];
}