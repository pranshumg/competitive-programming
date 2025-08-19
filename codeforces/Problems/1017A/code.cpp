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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        v[i] = a + b + c + d;
    }
    int id = v[0];
    sort(v.begin(), v.end(), greater<int>());
    auto it = find(v.begin(), v.end(), id);
    cout << (it - v.begin()) + 1;
    return 0;
}