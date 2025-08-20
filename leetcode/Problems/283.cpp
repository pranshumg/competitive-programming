#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int j = -1;
        for (int i = 0; i < (int)v.size(); i++) {
            if (v[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1) {
            return;
        }
        for (int i = j + 1; i < (int)v.size(); i++) {
            if (v[i] != 0) {
                swap(v[i], v[j++]);
            }
        }
    }
};