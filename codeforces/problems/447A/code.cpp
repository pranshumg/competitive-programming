/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int p, n;
    cin >> p >> n;
    int curr, ans = -1;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (find(v.begin(), v.end(), curr % p) == v.end()) {
            v.emplace_back(curr % p);
        } else if (ans == -1) {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}