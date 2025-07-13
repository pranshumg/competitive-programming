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
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'n') {
            one++;
        } else if (s[i] == 'r') {
            zero++;
        }
    }
    for (int i = 0; i < one; i++) {
        cout << 1 << " ";
    }
    for (int i = 0; i < zero; i++) {
        cout << 0 << " ";
    }
    return 0;
}