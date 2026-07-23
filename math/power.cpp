// TC - O(log n), SC - O(1)

template <typename T>
T power(T a, T b) {
  T ans = 1;
  while (b) {
    if (b & 1) {
      ans *= a;
    }
    a *= a;
    b >>= 1;
  }
  return ans;
}