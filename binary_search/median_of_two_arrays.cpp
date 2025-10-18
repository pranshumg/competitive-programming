#include <bits/stdc++.h>

using namespace std;

/* Median of two sorted arrays */

// Brute
// TC - O(n + m), SC - O(n + m)
double median(vector<int>& v, int n, vector<int>& w, int m) {
  vector<int> merged;
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (v[i] <= w[j]) {
      merged.emplace_back(v[i++]);
    } else {
      merged.emplace_back(w[j++]);
    }
  }
  while (i < n) {
    merged.emplace_back(v[i++]);
  }
  while (j < m) {
    merged.emplace_back(w[j++]);
  }
  int size = n + m;
  if (size % 2 == 1) {
    return merged[size / 2];
  }
  return ((double)merged[size / 2] + (double)merged[size / 2 - 1]) / 2.0;
}

// Better
// TC - O(n + m), SC - O(1)
double median(vector<int>& v, int n, vector<int>& w, int m) {
  int size = n + m;
  int idx1 = size / 2 - 1, idx2 = n / 2;
  int el1 = -1, el2 = -1;
  int cnt = 0;
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (v[i] <= w[j]) {
      if (cnt == idx1) {
        el1 = v[i];
      }
      if (cnt == idx2) {
        el2 = v[i]; 
      }
      cnt++, i++;
    } else {
      if (cnt == idx1) {
        el1 = w[j];
      }
      if (cnt == idx2) {
        el2 = w[j]; 
      }
      cnt++, j++;
    }
  } 
  while (i < n) {
    if (cnt == idx1) {
      el1 = v[i];
    }
    if (cnt == idx2) {
      el2 = v[i]; 
    }
    cnt++, i++;
  }
  while (j < m) {
    if (cnt == idx1) {
      el1 = w[j];
    }
    if (cnt == idx2) {
      el2 = w[j]; 
    }
    cnt++, j++;
  }
  if (size % 2 == 1) {
    return el2;
  }
  return (double)((double)(el1 + el2)) / 2.0;
}

// Binary Search
// TC - O(log(min(n, m))), SC - O(1)
double median(vector<int>& v, int n, vector<int>& w, int m) {
  if (n > m) {
    return median(w, m, v, n);
  }
  int low = 0, high = n;
  int left = (n + m + 1) / 2;
  int size = n + m;
  while (low <= high) {
    int mid1 = (low + high) / 2;
    int mid2 = left - mid1;
    int l1 = INT_MIN, l2 = INT_MIN;
    int r1 = INT_MAX, r2 = INT_MAX;
    if (mid1 < n) {
      r1 = v[mid1];
    }
    if (mid2 < m) {
      r2 = w[mid2];
    }
    if (mid1 > 0) {
      l1 = v[mid1 - 1];
    }
    if (mid2 > 0) {
      l2 = w[mid2 - 1];
    }
    if (l1 <= r2 && l2 <= r1) {
      if (size % 2 == 1) {
        return max(l1, l2);
      }
      return ((double)(max(l1, l2) + min(r1, r2)) / 2.0);
    } else if (l1 > r2) {
      high = mid1 -1;
    } else {
      low = mid1 + 1;
    }
  }
  return 0;
}
  