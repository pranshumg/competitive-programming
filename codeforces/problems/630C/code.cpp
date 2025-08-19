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
    int i = 1;
    int64_t ans = 0;
    while (i <= n) {
        ans += pow(2, i++);
    }
    cout << ans << '\n';
    return 0;
}