#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int ans = v[0], sum = v[0];
        for (int i = 1; i < (int)v.size(); i++) {
            if (sum + v[i] < v[i]) {
                sum = v[i];
            } else {
                sum += v[i];
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};