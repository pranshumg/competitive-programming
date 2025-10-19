#include <bits/stdc++.h>

using namespace std;

/* Count Inversions */
// Brute (TC - O(n2), SC - O(1))
int inversions(vector<int>& v, int n) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        cnt++;
      }
    }
  }
  return cnt;
}

// Optimal (merge sort) (TC - O(n log n), SC - O(n))
int merge_count(vector<int>& v, int low, int mid, int high) {
  int cnt = 0;
  vector<int> tmp;
  int left = low, right = mid + 1;
  while (left <= mid && right <= high) {
    if (v[left] <= v[right]) {
      tmp.push_back(v[left++]);
    } else {
      cnt += mid - left + 1;
      tmp.push_back(v[right++]);
    }
  }
  while (left <= mid) {
    tmp.push_back(v[left++]);
  }
  while (right <= high) {
    tmp.push_back(v[right++]);
  }
  for (int i = low; i <= high; i++) {
    v[i] = tmp[i - low];
  }
  return cnt;
}

int merge_sort_count(vector<int>& v, int low, int high) {
  if (low >= high) {
    return 0;
  }
  int mid = (low + high) / 2;
  int cnt = 0;
  cnt += merge_sort_count(v, low, mid);
  cnt += merge_sort_count(v, mid + 1, high);
  cnt += merge_count(v, low, mid, high);
  return cnt;
} 

int inversions(vector<int>& v, int n) {
  return merge_sort_count(v, 0, n - 1);
}