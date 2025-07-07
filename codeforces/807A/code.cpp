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
    vector<pair<int, int>> v(n), w(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (auto it: v) {
        if (it.first != it.second) {
            cout << "rated";
            return 0;
        }
    }
    w = v;
    sort(w.rbegin(), w.rend());
    if (v == w) {
        cout << "maybe";
    } else {
        cout << "unrated";
    }
    return 0;
}