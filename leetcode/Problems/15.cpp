#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        for (int i = 0; i < (int)v.size(); i++) {
            if (i > 0 && v[i] == v[i - 1]) {
                continue;
            }
            int j = i + 1, k = (int)v.size() - 1;
            while (j < k) {
                if (v[i] + v[j] + v[k] < 0) {
                    j++;
                } else if (v[i] + v[j] + v[k] > 0) {
                    k--;
                } else {
                    vector<int> tmp = {v[i], v[j], v[k]};
                    ans.push_back(tmp);
                    j++, k--;
                    while (j < k && v[j] == v[j - 1]) {
                        j++;
                    }
                    while (j < k && v[k] == v[k + 1]) {
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};