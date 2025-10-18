#include <bits/stdc++.h>

using namespace std;

/* Count occurrences */
// TC - O(log n), SC - O(1)
int first(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1, first = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] == target) {
      first = mid, high = mid - 1;
    } else if (v[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return first;
}

int last(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1, last = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] == target) {
      last = mid, low = mid + 1;
    } else if (v[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return last;
}

pair<int, int> search(vector<int>& v, int target) {
  int f = first(v, (int)v.size(), target);
  if (f == -1) {
    return {-1, -1};
  } 
  return {f, last(v, (int)v.size(), target)};
}

int count(vector<int>& v, int target) {
  pair<int, int> p = search(v, target);
  if (p.first == -1) {
    return 0;
  }
  return p.second - p.first + 1;
}
