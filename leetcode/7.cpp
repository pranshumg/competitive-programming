#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long rev_x = 0;
        while (x != 0) {
            int rem = x % 10;
            rev_x = rev_x * 10 + rem;
            x /= 10;
        }
        if (rev_x > INT_MAX || rev_x < INT_MIN) {
            return 0;
        }    
        return static_cast<int>(rev_x);
    }
};

int main() {
    int x;
    cout << "x: ";
    cin >> x;

    Solution a;
    cout << "reverse: " << a.reverse(x) << endl;

    return 0;
}