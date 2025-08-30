/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    cin >> n >> m;
    int cnt = 0, mini = INT_MAX, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int curr;
            cin >> curr;
            if (curr < 0) {
                cnt++;
            }
            mini = min(mini, abs(curr));
            sum += abs(curr);
        }
    }
    cout << (cnt % 2 == 0 ? sum : sum - 2 * mini) << '\n';
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