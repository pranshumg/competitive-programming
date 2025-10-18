#include <bits/stdc++.h>

using namespace std;

/* Reverse pairs */
// Brute (TC - O(n²), SC - O(1))
int reverse_pairs(vector<int>& v, int n) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] > 2 * v[j]) {
        cnt++;
      }
    }
  }
  return cnt;
}

// Optimal (TC - O(n log n), SC - O(n))
void merge(vector<int>& v, int low, int mid, int high) {
  vector<int> tmp;
  int left = low, right = mid + 1;
  while (left <= mid && right <= high) {
    if (v[left] <= v[right]) {
      tmp.push_back(v[left++]);
    } else {
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
}

int count_pairs(vector<int>& v, int low, int mid, int high) {
  int right = mid + 1, cnt = 0;
  for (int i = low; i <= mid; i++) {
    while (right <= high && v[i] > 2 * v[right]) {
      right++;
    }
    cnt += (right - (mid + 1));
  }
  return cnt;
}

int merge_sort(vector<int>& v, int low, int high) {
  int cnt = 0;
  if (low >= high) {
    return cnt;
  }
  int mid = (low + high) / 2;
  cnt += merge_sort(v, low, mid);
  cnt += merge_sort(v, mid + 1, high);
  cnt += count_pairs(v, low, mid, high);
  merge(v, low, mid, high);
  return cnt;
} 

int reverse_pairs(vector<int>& v, int n) {
  return merge_sort(v, 0, n - 1);
}
