/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    if (n <= m && n <= k) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}