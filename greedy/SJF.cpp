#include <bits/stdc++.h>

using namespace std;

/* Shortest Job First CPU scheduling */

// TC - O(n log n), SC - O(1)
// Note: Returns integer average (truncated). Change return type to float/double for precision.
int average(vector<int>& v) {
    sort(v.begin(), v.end());
    int t = 0, wt = 0;
    for (auto &it : v) {
        wt += t;     // Waiting time for current process is the total time elapsed so far
        t += it;     // Update total time by adding current process burst time
    }
    return wt / (int)v.size();
}