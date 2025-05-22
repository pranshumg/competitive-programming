#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string a = s;
        int start = 0, end = s.length() - 1;
        while (start < end) {
            swap(s[start++], s[end--]);
        }
        if (a == s) {
            return true;
        } else {
            return false;
        }     
    }
};

int main() {
    int x;
    cout << "x: ";
    cin >> x;

    Solution a;
    cout << boolalpha << a.isPalindrome(x) << endl;
    
    return 0;
}