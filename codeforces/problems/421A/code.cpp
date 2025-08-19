/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v1(a), v2(b);
    for (int i = 0; i < a + b; i++) {
        if (i < a) {
            cin >> v1[i];
        } else {
            cin >> v2[i - a];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (find(v1.begin(), v1.end(), i) != v1.end()) {
            cout << 1 << ' ';
        } else {
            cout << 2 << ' ';
        }
    }
    return 0;
}