#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        int pos = 0, neg = 1;
        vector<int> res((int)v.size());
        for (int i = 0; i < (int)v.size(); i++) {
            if (v[i] > 0) {
                res[pos] = v[i], pos += 2;
            } else {
                res[neg] = v[i], neg += 2;
            }
        }
        return res;
    }
};