#include <bits/stdc++.h>

using namespace std;

/* Capacity to ship packages within D days */
// TC - O(n * log (sum(v) - max(v) + 1)), SC - O(1)
bool check(vector<int>& v, int capacity, int days_req) {
  int days = 1, load = 0;
  for (auto it: v) {
    if (load + it > capacity) {
      days++, load = it;
    } else {
      load += it;
    }
  }
  return days <= days_req;
}

int ship_within_days(vector<int>& v, int days) {
  int low = *(max_element(v.begin(), v.end())), high = accumulate(v.begin(), v.end(), 0);
  while (low <= high) {
    int mid = (low + high) / 2;
    if (check(v, mid, days)) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return low;
}
