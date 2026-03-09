#include <bits/stdc++.h>

using namespace std;

/* Koko eating bananas */

// Calculates the total hours Koko needs to finish all piles
// given a specific eating speed 'h'.
int time(vector<int>& v, int h) {
  int ans = 0; 
  for (int i : v) {
    // Equivalent to ceil(i / h). 
    // It finds how many hours it takes to finish a pile of size 'i'.
    ans += (i + h - 1) / h;
  }
  return ans;
}

// TC - O(n * log m) where m is the maximum no. of bananas in a single pile, SC - O(1)
int min_eating_speed(vector<int>& v, int n, int h) {
  // The search space for the speed 'k':
  // Lower bound: 1 (minimum possible speed)
  // Upper bound: The largest pile (at this speed, Koko eats any pile in 1 hour)
  int low = 1, high = *max_element(v.begin(), v.end());
  while (low <= high) {
    int mid = low + (high - low) / 2;
    // Check if the current speed 'mid' allows Koko to finish in time
    if (time(v, mid) <= h) {
      // If true, 'mid' is a potential answer, but we want the MINIMUM.
      // So, we discard the right half and try smaller speeds.
      high = mid - 1;
    } else {
      // If 'mid' is too slow, we must increase the speed.
      // Discard the left half.
      low = mid + 1;
    }
  }
  // When the loop ends, 'low' will be the smallest speed that satisfies the condition.
  return low;
}