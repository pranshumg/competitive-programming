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
    int ans = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}