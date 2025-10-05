#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool check(vector<int>& v, int threshold, int div) {
        int sum = 0;
        for (auto it: v) {
            sum += (it + div - 1) / div;
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *(max_element(nums.begin(), nums.end()));
        while (low <= high) {
            int mid = (low + high) / 2;
            if (check(nums, threshold, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};