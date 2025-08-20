#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        int cnt = 0, sum = 0;
        unordered_map<int, int> pre_sum;
        pre_sum[0]++;
        for (int i = 0; i < (int)v.size(); i++) {
            sum += v[i];
            cnt += pre_sum[sum - k];
            pre_sum[sum]++;
        }
        return cnt;
    }
};