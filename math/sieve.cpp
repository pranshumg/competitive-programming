// TC - O(n log log n), SC - O(n)

vector<bool> sieve(int n) {
  vector<bool> is_prime(n + 1, true);
  if (n >= 0) {
    is_prime[0] = false;
  }
  if (n >= 1) {
    is_prime[1] = false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
  return is_prime;
}