/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int> v(n);
    int64_t sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += abs(v[i]);
    }
    int ops = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            cnt++;
            if (cnt == 1) {
                ops++;
            }
        } else if (v[i] > 0) {
            cnt = 0;
        }
    }
    cout << sum << ' ' << ops << '\n';
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