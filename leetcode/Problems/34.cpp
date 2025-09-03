#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lower_bound(vector<int>& v, int n, int target) {
        int low = 0, high = n - 1, ans = n;
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

    int upper_bound(vector<int>& v, int n, int target) {
        int low = 0, high = n - 1, ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid] > target) {
                ans = mid, high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& v, int target) {
        int lb = lower_bound(v, (int)v.size(), target); 
        if (lb == (int)v.size() || v[lb] != target) {
            return {-1, -1};
        }
        return {lb, upper_bound(v, (int)v.size(), target) - 1};
    }
};