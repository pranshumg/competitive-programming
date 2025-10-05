#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int ceil_div(int a, int b) {
        return (a + b - 1) / b;
    }

    int64_t total(vector<int>& piles, int n, int h) {
        int64_t ans = 0;
        for (auto it: piles) {
            ans += ceil_div(it, h);
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *(max_element(piles.begin(), piles.end()));
        while (low <= high) {
            int mid = (low + high) / 2;
            int64_t total_h = total(piles, (int)piles.size(), mid);
            if (total_h <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};