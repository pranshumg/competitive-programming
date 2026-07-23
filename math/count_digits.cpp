// TC - O(1), SC - O(1)

template <typename T>
int count_digits(T n) {
  n = abs(n);
  return n ? int(log10(n) + 1) : 1;
}