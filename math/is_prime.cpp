// TC - O(sqrt(n)), SC - O(1)

template <typename T>
bool is_prime(T n) {
  int cnt = 0;
  for (T i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      cnt++;
      if (i != n / i) {
        cnt++;
      }
    }
    if (cnt > 2) {
      break;
    }
  }
  return cnt == 2;
}