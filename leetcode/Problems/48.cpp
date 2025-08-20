#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        for (int i = 0; i < (int)v.size() - 1; i++) {
            for (int j = i + 1; j < (int)v[i].size(); j++) {
                swap(v[i][j], v[j][i]);
            }
        }
        for (int i = 0; i < (int)v.size(); i++) {
            reverse(v[i].begin(), v[i].end());
        }
    }
};