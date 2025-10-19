#include <bits/stdc++.h>

using namespace std;

/* Minimise maximum distance between gas stations */

// Brute
// TC - O(n * k), SC - O(n)
long double minimise(vector<int>& v, int n, int k) {
  vector<int> placed(n - 1, 0);
  for (int gas_stations = 1; gas_stations <= k; ++gas_stations) {
    long double max_section = -1;
    int max_idx = -1;
    for (int i = 0; i < n - 1; ++i) {
      long double diff = v[i + 1] - v[i];
      long double section_length = diff / (long double)(placed[i] + 1);
      if (section_length > max_section) {
        max_section = section_length;
        max_idx = i;
      }
    }
    placed[max_idx]++;
  }
  long double max_ans = -1;
  for (int i = 0; i < n - 1; ++i) {
    long double diff = v[i + 1] - v[i];
    long double section_length = diff / (placed[i] + 1);
    max_ans = max(max_ans, section_length);
  }
  return max_ans;
}

// Better
// TC - O((n + k) * log n), SC - O(n)
long double minimise(vector<int>& v, int n, int k) {
  vector<int> placed(n - 1, 0);
  priority_queue<pair<long double, int>> pq;
  for (int i = 0; i < n - 1; ++i) {
    pq.push({v[i + 1] - v[i], i});
  }
  for (int gas_stations = 1; gas_stations <= k; ++gas_stations) {
    auto tp = pq.top(); 
    pq.pop();
    int sec_idx = tp.second;
    placed[sec_idx]++;
    long double diff = v[sec_idx + 1] - v[sec_idx];
    long double section_length = diff / (placed[sec_idx] + 1);
    pq.push({section_length, sec_idx});
  }
  return pq.top().first;
}

// Binary search
// TC - O(n), SC - O(1)
int no_of_gas_stations(vector<int>& v, int n, long double dist) {
  int cnt = 0;
  for (int i = 1; i < n; ++i) {
    int number_in_btw = (v[i] - v[i - 1]) / dist;
    if ((v[i] - v[i - 1]) == number_in_btw * dist) {
      number_in_btw--;
    }
    cnt += number_in_btw;
  }
  return cnt;
}

long double minimise(vector<int>& v, int n, int k) {
  long double low = 0, high = 0;
  for (int i = 1; i < n; ++i) {
    high = max(high, (long double)v[i] - v[i - 1]);
  }
  long double diff = 1e-6;
  while (high - low > diff) {
    long double mid = (low + high) / 2.0;
    int cnt = no_of_gas_stations(v, n, mid);
    cnt > k ? low = mid : high = mid;
  }
  return high;
}
