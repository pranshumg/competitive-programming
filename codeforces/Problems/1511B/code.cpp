/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v{1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
    cout << v[a - 1] << ' ' << v[b - 1] + v[c - 1] << '\n';
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