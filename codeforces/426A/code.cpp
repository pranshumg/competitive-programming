/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.begin() + n - 1, 0);
    if (sum <= s) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}