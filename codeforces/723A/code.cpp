/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int ans = abs(a[0] - a[1]) + abs(a[2] - a[1]);
    cout << ans << '\n';
    return 0;
}