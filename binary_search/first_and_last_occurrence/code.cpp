#include <bits/stdc++.h>

using namespace std;

/* First and last occurrence */

// using upper and lower bound (TC - O(log n), SC - O(1))
int lower_bound(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1, ans = n;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] >= target) {
      ans = mid, high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

int upper_bound(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1, ans = n;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] > target) {
      ans = mid, high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

vector<int> search_bounds(vector<int>& v, int target) {
  int lb = lower_bound(v, (int)v.size(), target); 
  if (lb == (int)v.size() || v[lb] != target) {
    return {-1, -1};
  }
  return {lb, upper_bound(v, (int)v.size(), target) - 1};
}

// Binary search (TC - O(log n), SC - O(1))
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

vector<int> search_binary(vector<int>& v, int target) {
  int f = first(v, (int)v.size(), target);
  if (f == -1) {
    return {-1, -1};
  } 
  return {f, last(v, (int)v.size(), target)};
}
