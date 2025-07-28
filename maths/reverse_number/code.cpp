#include <bits/stdc++.h>

using namespace std;

// TC - O(log n)
int func(int n) {
    int rev_n = 0;
    while (n > 0) {
        int d = n % 10;
        rev_n = rev_n * 10 + d;
        n /= 10;
    }
    return rev_n;
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << '\n';
    return 0;
}