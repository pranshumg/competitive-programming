#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < (int)v.size(); i++) {
            if (mp.find(target - v[i]) != mp.end()) {
                return {mp[target - v[i]], i};
            }
            mp[v[i]] = i;
        }
        return {};
    }
};