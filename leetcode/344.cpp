#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }
};

void display(vector<char> s) {
    for (char ch : s) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    vector<char> s = {'l', 'e', 'e', 't', 'c', 'o', 'd' ,'e'};

    cout << "s: ";
    display(s);

    Solution a;
    a.reverseString(s);

    cout << "reverse: ";
    display(s);
    
    return 0;

}