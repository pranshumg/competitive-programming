#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        vector<int> ans;
        int top = 0, bottom = (int)v.size() - 1, left = 0, right = (int)v[0].size() - 1;
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                ans.push_back(v[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                ans.push_back(v[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(v[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(v[i][left]);
                }
                left++;
            }
        } 
        return ans;
    }
};