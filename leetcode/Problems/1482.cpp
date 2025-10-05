#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool possible(vector<int>& v, int day, int m, int k) {
        int bouquets = 0, cnt = 0;
        for (auto it: v) {
            if (it <= day) {
                cnt++;
            } else {
                bouquets += cnt / k, cnt = 0;
            }
        }
        bouquets += cnt / k;
        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((int64_t)m * k > (int)bloomDay.size()) {
            return -1;
        }
        int low = *(min_element(bloomDay.begin(), bloomDay.end()));
        int high = *(max_element(bloomDay.begin(), bloomDay.end()));
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k)) {
                ans = mid, high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};