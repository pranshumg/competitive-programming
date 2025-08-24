#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> stableMountains(vector<int>& v, int threshold) {
        vector<int> ans;
        for (int i = 1; i < (int)v.size(); i++) {
            if (v[i - 1] > threshold) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};