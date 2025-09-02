#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& v) {
        int prefix = 1, suffix = 1, ans = INT_MIN;
        for (int i = 0; i < (int)v.size(); i++) {
            if (prefix == 0) {
                prefix = 1;
            }
            if (suffix == 0) {
                suffix = 1;
            }
            prefix *= v[i], suffix *= v[(int)v.size() - i - 1];
            ans = max({ans, prefix, suffix});
        }
        return ans;
    }
};