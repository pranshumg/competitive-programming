/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int> ans;
    char curr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> curr;
            if (curr == '#') {
                ans.emplace_back(j + 1);
            }
        }
    }
    for (int i = (int)ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << ' ';
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