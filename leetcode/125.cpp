#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool is_alphanumeric(char c) {
        if ((c >= '0' && c <= '9') || (tolower(c) >= 'a' && tolower(c) <= 'z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int left = 0, right = (int)s.size() - 1;
        while (left < right) {
            while (left < right && !is_alphanumeric(s[left])) {
                left++;
            }
            while (left < right && !is_alphanumeric(s[right])) {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            } 
            left++, right--;
        }
        return true;
    }
};