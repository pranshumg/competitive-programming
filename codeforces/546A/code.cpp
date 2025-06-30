/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n, w;
    cin >> k >> n >> w;
    int total_price = 0;
    for (int i = 1; i <= w; i++) {
        total_price += i * k;
    }
    int ans;
    if (total_price > n) {
        ans = total_price - n;
    } else {
        ans = 0;
    }
    cout << ans << '\n';   
    return 0;
}