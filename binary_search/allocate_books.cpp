#include <bits/stdc++.h>

using namespace std;

/* Allocate books */

int check(vector<int>& v, int pages) {
  int students = 1, no_of_pages = 0;
  for (auto it: v) {
    if (no_of_pages + it <= pages) {
      no_of_pages += it;
    } else {
      students++, no_of_pages = it;
    }
  }
  return students;
}

// linear search
// TC - O(n * (sum(v) - max(v))), SC - O(1)
int pages(vector<int>& v, int n, int m) {
  if (m > n) {
    return -1;
  }
  int low = *(max_element(v.begin(), v.end())), high = accumulate(v.begin(), v.end(), 0);
  for (int i = low; i <= high; ++i) {
    int cnt_students = check(v, i);
    if (cnt_students <= m) {
      return i;
    }
  }
}

// binary search
// TC - O(n * log (sum(v) - max(v))), SC - O(1)
int pages(vector<int>& v, int n, int m) {
  if (m > n) {
    return -1;
  }
  int low = *(max_element(v.begin(), v.end())), high = accumulate(v.begin(), v.end(), 0);
  while (low <= high) {
    int mid = (low + high) / 2;
    int cnt_students = check(v, mid);
    if (cnt_students <= m) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return low;
}
