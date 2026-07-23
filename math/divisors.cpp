// TC - O(sqrt(n)), SC - O(1)

template <typename T>
vector<T> divisors(T n) {
  vector<T> ans;
  for (T i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ans.push_back(i);
      if (i != n / i) {
        ans.push_back(n / i);
      }
    }
  }
  return ans;
}