#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        for (int i = 0; i < (int)v.size(); i++) {
            if (i > 0 && v[i] == v[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < (int)v.size(); j++) {
                if (j > i + 1 && v[j] == v[j - 1]) {
                    continue;
                }
                int k = j + 1, l = (int)v.size() - 1;
                while (k < l) {
                    int64_t sum = v[i] + v[j];
                    sum += v[k] + v[l];
                    if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else {
                        vector<int> tmp = {v[i], v[j], v[k], v[l]};
                        ans.push_back(tmp);
                        k++, l--;
                        while (k < l && v[k] == v[k - 1]) {
                            k++;
                        }
                        while (k < l && v[l] == v[l + 1]) {
                            l--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};