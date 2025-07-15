/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int t_a = 0, r_a = 0, t_b = 0, r_b = 0;
    while (n--) {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1) {
            t_a += 10;
            r_a += x;
        } else {
            t_b += 10;
            r_b += x;
        }
    }
    if (r_a >= t_a / 2) {
        cout << "LIVE\n";
    } else {
        cout << "DEAD\n";
    }
    if (r_b >= t_b / 2) {
        cout << "LIVE";
    } else {
        cout << "DEAD";
    }
    return 0;
}