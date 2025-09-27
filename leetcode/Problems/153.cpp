#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& v) {
        int low = 0, high = (int)v.size() - 1, ans = INT_MAX;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[low] <= v[high]) {
                ans = min(ans, v[low]);
                break;
            }
            if (v[low] <= v[mid]) {
                ans = min(ans, v[low]);
                low = mid + 1;
            } else {
                ans = min(ans, v[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};