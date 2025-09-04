/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int> ans;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int curr;
            cin >> curr;
            if (j == 0 || i == n - 1) {
                ans.push_back(curr);
                sum += curr;
            }
        }
    }
    cout << (2 * n * (2 * n + 1)) / 2  - sum << ' ';
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