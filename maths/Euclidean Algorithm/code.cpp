#include <bits/stdc++.h>

using namespace std;

/* Euclidean algorithm */
// TC - O(log min(n, m))
void func(int n, int m) {
    while (n > 0 && m > 0) {
        if (n > m) {
            n %= m;
        } else {
            m %= n;
        }
    }
    if (n == 0) {
        cout << m << '\n';
    } else {
        cout << n << '\n';
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    func(n, m);
    return 0;
}