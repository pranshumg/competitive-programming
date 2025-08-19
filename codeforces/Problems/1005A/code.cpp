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
    int sw = 1;
    vector<int> v(n), pass;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0 && v[i - 1] >= v[i]) {
            sw++;
            pass.push_back(v[i - 1]);
        }
    }
    pass.push_back(v[n - 1]);
    cout << sw << '\n';
    for (auto it: pass) {
        cout << it << " ";
    }
    return 0;
}
