// Smallest Prime Factor (SPF)
// TC - O(n log log n), SC - O(n)

vector<int> Spf(int n) {
  vector<int> spf(n + 1);
  for (int i = 0; i <= n; i++) {
    spf[i] = i;
  }
  for (int i = 2; i * i <= n; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j <= n; j += i) {
        if (spf[j] == j) {
          spf[j] = i;
        }
      }
    }
  }
  return spf;
}

// Prime Factors using SPF
// TC - O(log n), SC - O(log n)

vector<int> prime_factors(int n) {
  vector<int> spf = Spf(n);
  vector<int> ans;
  while (n > 1) {
    ans.push_back(spf[n]);
    n /= spf[n];
  }
  return ans;
}