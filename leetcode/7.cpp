#include <bits/stdc++.h>

class Solution {
public:
    int64_t reverse(int x) {
        int64_t rev = 0;
        while (x != 0) {
            int d = x % 10;
            rev = rev * 10 + d;
            x /= 10;
        }
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        } 
        return rev;
    }
};