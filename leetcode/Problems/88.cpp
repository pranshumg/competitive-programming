#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        for (int i = m; i < m + n; i++) {
            v1[i] = v2[i - m];
        }
        sort(v1.begin(), v1.end());
    }
};