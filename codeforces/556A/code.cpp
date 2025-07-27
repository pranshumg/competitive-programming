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
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            one++;
        } else {
            zero++;
        }
    }
    if (one > zero) {
        swap(one, zero);
    }
    cout << n - (one * 2);
    return 0;
}