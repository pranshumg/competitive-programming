#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int cnt1 = 0, cnt2 = 0, el1 = INT_MIN, el2 = INT_MIN;
        for (int i = 0; i < (int)v.size(); i++) {
            if (cnt1 == 0 && v[i] != el2) {
                cnt1 = 1, el1 = v[i];
            } else if (cnt2 == 0 && v[i] != el1) {
                cnt2 = 1, el2 = v[i];
            } else if (el1 == v[i]) {
                cnt1++;
            } else if (el2 == v[i]) {
                cnt2++;
            } else {
                cnt1--, cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < (int)v.size(); i++) {
            if (el1 == v[i]) {
                cnt1++;
            } 
            if (el2 == v[i]) {
                cnt2++;
            }
        }
        vector<int> ans;
        if (cnt1 >= ((int)v.size() / 3) + 1) {
            ans.push_back(el1);
        }
        if (cnt2 >= ((int)v.size() / 3) + 1) {
            ans.push_back(el2);
        }
        return ans;
    }
};