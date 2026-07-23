// Count Primes in Range [L, R]
// TC - O(N log log N + N) preprocessing 
//      O(1) per query

vector<int> prime_prefix(int n) {
  vector<bool> is_prime = sieve(n);
  vector<int> pre(n + 1);
  for (int i = 1; i <= n; i++) {
    pre[i] = pre[i - 1] + is_prime[i];
  }
  return pre;
}

int count_primes(const vector<int>& pre, int l, int r) {
  if (l <= 1) {
    return pre[r];
  }
  return pre[r] - pre[l - 1];
}