#include <bits/stdc++.h>

using namespace std;

/* Merge sorted arrays without extra space */
// Optimal 1 (TC - O(m log m + n log n), SC - O(1))
void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
  int left = m - 1, right = 0;
  while (left >= 0 && right < n) {
    if (v1[left] > v2[right]) {
      swap(v1[left--], v2[right++]);
    } else {
      break;
    }
  }
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());
}

// Optimal 2 (gap method) (TC - O((m + n) log (m + n)), SC - O(1))
void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
  int len = n + m, gap = (len + 1) / 2;
  while (gap > 0) {
    int left = 0, right = left + gap;
    while (right < len) {
      if (right < m) {
        if (v1[left] > v1[right]) {
          swap(v1[left], v1[right]);
        }
      } else if (left < m && right >= m) {
        if (v1[left] > v2[right - m]) {
          swap(v1[left], v2[right - m]);
        }
      } else {
        if (v2[left - m] > v2[right - m]) {
          swap(v2[left - m], v2[right - m]);
        }
      }
      left++, right++;
    }
    if (gap == 1) {
      break;
    }
    gap = (gap + 1) / 2;
  }
}
