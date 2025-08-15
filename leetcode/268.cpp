#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& v) {
        int xor1 = 0, xor2 = 0;
        for (int i = 0; i < (int)v.size(); i++) {
            xor1 ^= i;
            xor2 ^= v[i];
        }
        xor1 ^= (int)v.size();
        return xor1 ^ xor2;
    }
};