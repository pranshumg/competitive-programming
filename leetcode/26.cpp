#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int left = 0, right = 1;
        while (right < (int)v.size()) {
            if (v[left] != v[right]) {
                v[left++ + 1] = v[right];
            }
            right++;
        }
        return left + 1;
    }
};