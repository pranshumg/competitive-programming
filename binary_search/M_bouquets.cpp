#include <bits/stdc++.h>

using namespace std;

/* Minimum days to make M bouquets */
// TC - O(n * log (max(v) - min(v) + 1)), SC - O(1)
bool possible(vector<int>& v, int m, int k, int day) {
  int bouquets = 0, cnt = 0;
  for (auto it: v) {
    if (it <= day) {
      cnt++;
    } else {
      bouquets += cnt / k, cnt = 0;
    }
  }
  bouquets += cnt / k;
  return bouquets >= m;
}

int min_days(vector<int>& v, int n, int m, int k) {
  if (m * k > n) {
    return -1;
  }
  int low = *(min_element(v.begin(), v.end())), high = *(max_element(v.begin(), v.end()));
  while (low <= high) {
    int mid = (low + high) / 2;
    if (possible(v, m, k, mid)) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return low;
}
