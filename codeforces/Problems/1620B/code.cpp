/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t w, h;
    cin >> w >> h;
    int h1, h2, w1, w2;
    vector<int64_t> a, b, c, d;
    cin >> h1;
    for (int i = 0; i < h1; i++) {
        int curr;
        cin >> curr;
        a.push_back(curr);
    }
    cin >> h2;
    for (int i = 0; i < h2; i++) {
        int curr;
        cin >> curr;
        b.push_back(curr);
    }
    cin >> w1;
    for (int i = 0; i < w1; i++) {
        int curr;
        cin >> curr;
        c.push_back(curr);
    }
    cin >> w2;
    for (int i = 0; i < w2; i++) {
        int curr;
        cin >> curr;
        d.push_back(curr);
    }
    cout << max({h * (a[h1 - 1] - a[0]), h * (b[h2 - 1] - b[0]), w * (c[w1 - 1] - c[0]), w * (d[w2 - 1] - d[0])}) << '\n';
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