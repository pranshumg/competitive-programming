#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool is_alphanumeric(char ch) {
        if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }
        
    bool isPalindrome(string s) {
        int start = 0, end = s.length() - 1;
        while (start < end) {
            if (!is_alphanumeric(s[start])) {
                start++;
                continue;
            }
            if (!is_alphanumeric(s[end])) {
                end--;
                continue;
            }
    
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;    
    }
};

int main() {
    string s = "leetcode";

    cout << "s: " << s << endl;

    Solution a;
    cout << boolalpha << a.isPalindrome(s) << endl;
    
    return 0;
}