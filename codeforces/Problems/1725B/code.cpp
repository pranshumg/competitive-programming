/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int N, D;
    cin >> N >> D;
    vector<int64_t> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int i = 0, j = N - 1, ans = 0;
    while (i <= j) {
        if (v[i] > D) {
            ans++, i++;
        } else {
            int a = 1;
            while (v[i] * a <= D) {
                a++;
            }
            if (a > j - i + 1) {
                break;
            }
            ans++, i++, j -= a - 1;
        }
    }
    cout << ans;
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