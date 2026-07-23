// TC - O(sqrt(n)), SC - O(k) where k is the no. of distinct prime factors

template <typename T>
vector<T> prime_factors(T n) {
  vector<T> ans;
  for (T i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      ans.push_back(i);
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n > 1) {
    ans.push_back(n);
  }
  return ans;
}