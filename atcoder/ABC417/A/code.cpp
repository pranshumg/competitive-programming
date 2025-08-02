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
    string s;
    cin >> s;
    for (int i = a; i < n - b; i++) {
        cout << s[i];
    }
    return 0;
}