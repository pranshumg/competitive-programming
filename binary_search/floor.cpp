// Floor: Finds the largest index i such that v[i] <= target. 
// TC - O(log n), SC - O(1)

template <typename T>
int floor(const vector<T>& v, T target) {
  int low = 0, high = int(v.size()) - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (v[mid] <= target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return high;
}