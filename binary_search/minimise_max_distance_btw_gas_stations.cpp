#include <bits/stdc++.h>

using namespace std;

/* Minimise maximum distance between gas stations */

// APPROACH 1: Greedy with Linear Scan
// TC - O(k * n), SC - O(n)
long double minimise(vector<int>& v, int n, int k) {
  vector<int> placed(n - 1, 0); // stores number of extra stations in each gap
  for (int gt = 0; gt < k; ++gt) {
    long double mx = 0;
    int idx = -1;
    for (int i = 0; i < n - 1; ++i) {
      long double dif = v[i + 1] - v[i];
      // Calculate the length of segments if we add one more station to this gap
      long double len = dif / (placed[i] + 1);
      if (len > mx) {
        mx = len;
        idx = i;
      }
    }
    // Place a station in the gap that currently results in the largest segment
    ++placed[idx];
  }
  long double ans = 0;
  for (int i = 0; i < n - 1; ++i) {
    long double dif = v[i + 1] - v[i];
    // Find the maximum segment length across all gaps after placing k stations
    ans = max(ans, dif / (placed[i] + 1));
  }
  return ans;
}

// APPROACH 2: Greedy with Priority Queue (Heap)
// TC - O(k * log n), SC - O(n)
long double minimise(vector<int>& v, int n, int k) {
  vector<int> placed(n - 1, 0);
  // Max-heap to efficiently fetch the largest current segment
  priority_queue<pair<long double, int>> pq;
  for (int i = 0; i < n - 1; ++i) {
    pq.emplace(v[i + 1] - v[i], i);
  }
  for (int gt = 0; gt < k; ++gt) {
    auto tp = pq.top();
    pq.pop();
    int idx = tp.second;
    ++placed[idx];
    long double dif = v[idx + 1] - v[idx];
    // Calculate new segment length for this specific gap and push back to heap
    long double len = dif / (placed[idx] + 1);
    pq.emplace(len, idx);
  }
  // The top of the heap is the maximum distance among all segments
  return pq.top().first;
}

// APPROACH 3: Binary Search on Answer
// TC: O(n * log(range/precision)), SC - O(1)
long double minimise(vector<int>& v, int n, int k) {
  long double low = 0, high = 0;
  // Initialize 'high' with the largest existing gap
  for (int i = 0; i < n - 1; ++i) {
    high = max(high, (long double)v[i + 1] - v[i]);
  }
  // Binary search for the smallest possible maximum distance
  while (high - low > 1e-6) {
    long double mid = low + (high - low) / 2.0;
    int cnt = 0;
    for (int i = 0; i < n - 1; ++i) {
      // Calculate how many stations are needed to ensure segments are <= mid
      int can_place = (v[i + 1] - v[i]) / mid;
      // If the gap is exactly divisible by mid, we need one less station
      if (can_place * mid == v[i + 1] - v[i]) --can_place;
      cnt += can_place;
    }
    // If stations needed > k, mid is too small, increase the distance
    if (cnt > k) {
      low = mid;
    } else {
      // Otherwise, mid is possible, try for a smaller maximum distance
      high = mid;
    }
  }
  return high;
}