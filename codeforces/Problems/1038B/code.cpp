/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    bool flag = false;
    int i;
    for (i = 2; i <= n; i++) {
        if ((((n * (n + 1)) / 2) - i) % i == 0) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "Yes\n" << 1 << ' ' << i << '\n' << n - 1 << ' ';
        for (int j = 1; j <= n; j++) {
            if (j == i) {
                continue;
            }
            cout << j << ' ';
        }
        return;
    } 
    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}