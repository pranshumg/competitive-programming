#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
            return fib(n - 1) + fib(n - 2);
        }
    }
};

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    
    Solution a;
    cout << "F(" << n << "): " << a.fib(n) << endl;

    return 0;
}