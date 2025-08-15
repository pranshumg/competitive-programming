#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& v) {
        int ans = 0;
        for (int i = 0; i < (int)v.size(); i++) {
            ans ^= v[i];
        }
        return ans;
    }
};