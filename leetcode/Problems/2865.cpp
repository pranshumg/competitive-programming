#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int64_t SUM(vector<int> v, int idx) {
        for (int i = idx - 1; i >= 0; i--) {
            v[i] = min(v[i], v[i + 1]);
        }
        for (int i = idx + 1; i < (int)v.size(); i++) {
            v[i] = min(v[i], v[i - 1]);
        }
        int64_t sum = 0;
        for (int i = 0; i < (int)v.size(); i++) {
            sum += v[i];
        }
        return sum;
    }

    int64_t maximumSumOfHeights(vector<int>& v) {
        int64_t ans = INT_MIN;
        for (int i = 0; i < (int)v.size(); i++) {
            ans = max(ans, SUM(v, i));
        }
        return ans;
    }
};
