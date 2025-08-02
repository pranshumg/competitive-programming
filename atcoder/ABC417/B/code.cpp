/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), ans;
    for (int i = 0; i < n + m; i++) {
        if (i < n) {
            cin >> a[i];
        } else {
            cin >> b[i - n];
        }
    }
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    while (i < n) {
        if (j == m || a[i] < b[j]) {
            ans.emplace_back(a[i++]);
        } else if (a[i] > b[j]) {
            j++;
        } else {
            i++, j++;
        }
    }
    for (auto it: ans) {
        cout << it << ' ';
    }
    return 0;
}