#include <bits/stdc++.h>

using namespace std;

/* Capacity to ship packages within d days */

// Helper function to calculate how many days are required to ship 
int total_days(vector<int>& v, int cap) {
  int days = 1;      // Start with the first day
  int weight = 0;    // Current accumulated weight for the day
  for (int i : v) {
    // If adding this package exceeds capacity, ship it on a new day
    if (weight + i > cap) {
      ++days;
      weight = i;    // New day starts with the current package 'i'
    } else {
      // Otherwise, add the package to the current day's load
      weight += i;
    }
  }
  return days;
}

// TC - (n * log(sum(v) - max(v))), SC - O(1)
int capacity(vector<int>& v, int days) {
  // Lower bound: The ship must be at least as large as the heaviest package.
  int low = *max_element(v.begin(), v.end());  
  // Upper bound: The ship can carry all packages in a single day.
  int high = accumulate(v.begin(), v.end(), 0);
  while (low <= high) {
    int mid = low + (high - low) / 2; 
    // If 'mid' capacity allows us to finish in 'days' or fewer...
    if (total_days(v, mid) <= days) {
      // It works! But we want the *minimum*, so try smaller values.
      high = mid - 1;
    } else {
      // This capacity is too small, we need more room.
      low = mid + 1;
    }
  }
  // After the loop, 'low' will point to the smallest valid capacity.
  return low;
}