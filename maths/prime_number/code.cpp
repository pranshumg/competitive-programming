#include <bits/stdc++.h>

using namespace std;

// Method 1
// TC - O(n)
void func1(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

// Method 2
// TC - O(√n)
void func2(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (n / i != i) {
                cnt++;
            }
        }
    }
    if (cnt == 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int n;
    cin >> n;
    func2(n);
    return 0;
}