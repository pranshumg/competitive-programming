#include <bits/stdc++.h>

using namespace std;

// TC - O(log n)
void func(int n) {
    int rev_n = 0, og_n = n;
    while (n > 0) {
        int d = n % 10;
        rev_n = rev_n * 10 + d;
        n /= 10;
    }
    if (og_n == rev_n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}