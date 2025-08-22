/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t n, pow10 = 10;
    cin >> n;
    vector<int64_t> ans;
    for (int i = 1; i < 18; i++) {
        if (n % (pow10 + 1) == 0) {
            ans.push_back(n / (pow10 + 1));
        }
        pow10 *= 10;
    }
    if ((int)ans.size() == 0) {
        cout << 0 << '\n';
        return;
    }
    reverse(ans.begin(), ans.end());
    cout << (int)ans.size() << '\n';
    for (auto it: ans) {
        cout << it << ' ';
    }
    cout << '\n';
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