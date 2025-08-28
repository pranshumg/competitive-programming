/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> ans;
    bool flag = true;
    int i = 0, j = 1;
    while (j < n) {
        if (v[i] == v[j]) {
            j++;
        } else if (j - i < 2) {
            flag = false;
            break;
        } else {
            ans.push_back(j);
            for (int k = i; k < j - 1; k++) {
                ans.push_back(k + 1);
            }
            i = j, j = i + 1;
        }
    }
    if (j - i > 1) {
        ans.push_back(j);
        for (int k = i; k < j - 1; k++) {
            ans.push_back(k + 1);
        }
    } else {
        flag = false;
    }
    if (!flag) {
        cout << -1 << '\n';
        return;
    }
    for (auto it: ans) {
        cout << it << ' ';
    }
    cout << '\n';
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