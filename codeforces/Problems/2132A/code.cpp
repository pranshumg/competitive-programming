/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    string a, b, c;
    cin >> n >> a >> m >> b >> c;
    string beg = "";
    for (int i = 0; i < (int)c.size(); i++) {
        if (c[i] == 'D') {
            a += b[i];
        } else {
            beg += b[i];
        }
    }
    reverse(beg.begin(), beg.end());
    cout << beg << a << '\n';
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