#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int ans = 0, cnt = 0;
        for (int i = 0; i < (int)v.size(); i++) {
            if (v[i] == 1) {
                cnt++;
            } else {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};