template <typename T>
int Binary_search(const vector<T>& v, T target) {
  int low = 0, high = int(v.size()) - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (v[mid] == target) {
      return mid;
    } else if (v[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}