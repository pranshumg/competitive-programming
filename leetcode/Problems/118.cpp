#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> generate_row(int row) {
        vector<int> ans_row;
        int64_t el = 1;
        ans_row.push_back(1);
        for (int col = 1; col < row; col++) {
            el = el * (row - col);
            el = el / (col);
            ans_row.push_back(el);
        }
        return ans_row;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generate_row(i));
        }
        return ans;        
    }
};