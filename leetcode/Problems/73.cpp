#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int col0 = 1;
        for (int i = 0; i < (int)v.size(); i++) {
            for (int j = 0; j < (int)v[i].size(); j++) {
                if (v[i][j] == 0) {
                    v[i][0] = 0;
                    if (j != 0) {
                        v[0][j] = 0;
                    } else {
                        col0 = 0;
                    }
                }
            }
        }
        for (int i = 1; i < (int)v.size(); i++) {
            for (int j = 1; j < (int)v[i].size(); j++) {
                if (v[i][j] != 0) {
                    if (v[i][0] == 0 || v[0][j] == 0) {
                        v[i][j] = 0;
                    }
                }
            }
        }
        if (v[0][0] == 0) {
            for (int j = 0; j < (int)v[0].size(); j++) {
                v[0][j] = 0;
            }
        }
        if (col0 == 0) {
            for (int i = 0; i < (int)v.size(); i++) {
                v[i][0] = 0;
            }
        }
    }
};