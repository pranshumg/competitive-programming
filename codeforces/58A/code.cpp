/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, r = "hello";
    cin >> s;
    int j = 0;
    vector<int> v;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == r[j]) {
            v.emplace_back(i);
            j++;
        }
    }
    bool flag = true;
    if (v.size() == 5) {
        for (int i = 1; i < 5; i++) {
            if (v[i] < v[i - 1]) {
                flag = false;
                break;
            }
        }
    } else {
        flag = false;
    }
    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}