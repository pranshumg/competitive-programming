#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int left = 0, right = (int)s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++, right--;
        }
        return true;
    }
};