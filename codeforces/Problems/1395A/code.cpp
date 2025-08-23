/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int odd = 0, even = 0;
    vector<int64_t> v(4);
    for (int i = 0; i < 4; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if ((odd == 4 || even == 4) || (even == 3 && odd == 1)) {
        cout << "Yes\n";
    } else if (odd == 3 && even == 1) {
        if (v[0] == 0 || v[1] == 0 || v[2] == 0) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    } else {
        cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}