#include <bits/stdc++.h>
using namespace std;

int func(int n) {
    int rev_n = 0;
    while (n > 0) {
        int ld = n % 10;
        rev_n = rev_n * 10 + ld;
        n /= 10;
    }
    return rev_n;
}

int main() {
    int n;
    cin >> n;
    int ans = func(n);
    cout << ans << endl;
    return 0;
}