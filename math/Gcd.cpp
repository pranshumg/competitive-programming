// TC - O(log min(n, m)), SC - O(1)

template <typename T>
T Gcd(T a, T b) {
  while (a > 0 && b > 0) {
    if (a > b) {
      a %= b;
    } else {
      b %= a;
    }
  }
  return a == 0 ? b : a;
}