#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.length() > 0 && (s.find(part) < s.length())) {
            s.erase(s.find(part), part.length());
        }
        return s;       
    }
};

int main() {
    string s = "leetcode", part = "leet";

    cout << "s: " << s << endl;
    cout << "part: " << part << endl;

    Solution a;
    cout << a.removeOccurrences(s, part) << endl;
    
    return 0;
}