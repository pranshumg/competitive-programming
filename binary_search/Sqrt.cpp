// Integer Square Root: Finds the largest x such that x*x <= n 
// TC - O(log n), SC - O(1)

template <typename T>
T Sqrt(T n) {
  T low = 1, high = n;
  while (low <= high) {
    T mid = low + (high - low) / 2;
    if (mid * mid <= n) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high;
}