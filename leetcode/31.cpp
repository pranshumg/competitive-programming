#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int idx = -1;
        for (int i = (int)v.size() - 2; i >= 0; i--) {
            if (v[i] < v[i + 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            reverse(v.begin(), v.end());
            return;
        }
        for (int i = (int)v.size() - 1; i > idx; i--) {
            if (v[i] > v[idx]) {
                swap(v[i], v[idx]);
                break;
            }
        }
        reverse(v.begin() + idx + 1, v.end());
    }
};