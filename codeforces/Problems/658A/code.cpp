/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, c;
    cin >> n >> c;
    vector<int> p(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    int l = 0, r = 0, t_l = 0, t_r = 0;
    for (int i = 0; i < n; i++) {
        t_l += t[i], t_r += t[n - 1 - i];
        l += max(0, p[i] - c * t_l);
        r += max(0, p[n - 1 - i] - c * t_r);
    }
    if (l > r) {
        cout << "Limak";
    } else if (r > l) {
        cout << "Radewoosh";
    } else {
        cout << "Tie";
    }
    return 0;
}