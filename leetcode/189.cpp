#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& v, int k) {
        k %= (int)v.size();
        reverse(v.begin(), v.begin() + ((int)v.size() - k));
        reverse(v.begin() + ((int)v.size() - k), v.end());
        reverse(v.begin(), v.end());
    }
};