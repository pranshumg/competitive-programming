#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        int low = 0, high = (int)v.size() - 1, ans = high + 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid] >= target) {
                ans = mid, high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};