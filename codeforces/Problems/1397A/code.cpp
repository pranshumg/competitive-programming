/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        string curr;
        cin >> curr;
        for (int i = 0; i < (int)curr.size(); i++) {
            mp[curr[i]]++;
        }
    }
    for (auto it: mp) {
        if (it.second % n != 0) {
            cout << "NO\n";
            return;
        } 
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}