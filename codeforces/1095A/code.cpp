/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int func(int n) {
    if (n == 0) {
        return 0;
    }
    int i = 1, result = 0;
    while (i <= n) {
        result += i;
        i++;
    } 
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (func(i) < s.size()) {
            cout << s[func(i)];
        } else {
            break;
        }
    }
    cout << '\n';  
    return 0;
}