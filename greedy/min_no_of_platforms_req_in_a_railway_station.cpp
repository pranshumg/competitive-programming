#include <bits/stdc++.h>

using namespace std;

/* Minimum number of platforms required in a railway station */

// TC - O(n log n), SC - O(1)
int find_platform(vector<int>& arr, vector<int>& dep) {
    // Sort arrival and departure times independently.
    // We treat these as two separate sets of events on a timeline.
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 0, j = 0;
    int cnt = 0, ans = 0;
    while (i < (int)arr.size()) {
        // If a train arrives before (or at the same time) the previous one leaves,
        // we need an extra platform.
        if (arr[i] <= dep[j]) {
            ++cnt, ++i;
        } 
        // If the arrival is later than the departure, one platform becomes free.
        else {
            --cnt, ++j;
        }
        // Keep track of the maximum platforms needed at any instant.
        ans = max(ans, cnt);
    }
    return ans; 
}