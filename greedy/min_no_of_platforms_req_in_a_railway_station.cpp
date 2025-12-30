#include <bits/stdc++.h>

using namespace std;

/* Minimum number of platforms required in a railway station */

// TC - O(n log n), SC - O(1)
int find_platform(vector<int>& arr, vector<int>& dep) {
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());
    int i = 0, j = 0;
    int cnt = 0, ans = 0;
    while (i < (int)arr.size()) {
        if (arr[i] <= dep[j]) {
            ++cnt, ++i;
        } else {
            --cnt, ++j;
        }
        ans = max(ans, cnt);
    }
    return ans;
}