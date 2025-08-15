#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& v, int k) {
        reverse(v.begin(), v.begin() + k);
        reverse(v.begin() + k, v.end());
        reverse(v.begin(), v.end());
    }

    bool check(vector<int>& v) {
        vector<int> temp(v.begin(), v.end());
        sort(temp.begin(), temp.end());
        int k = 0;
        for (int i = 1; i < (int)v.size(); i++) {
            if (v[i] < v[i - 1]) {
                k = i;
                break;
            }
        }
        if (k != 0) {
            rotate(v, k);
        }
        return v == temp;
    }
};