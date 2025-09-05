/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string s;
    cin >> s;
    int zero = 0, sum = 0;
    bool flag = false;
    for (int i = 0; i < (int)s.size(); i++) {
        int d = s[i] - '0';
        if (d % 2 == 0) {
            d == 0 ? zero++ : flag = true; 
        }
        sum += d;
    }
    if ((zero > 0 && sum % 3 == 0 && flag) || (!flag && zero > 1 && sum % 3 == 0)) {
        cout << "red\n";
        return;
    }
    cout << "cyan\n";
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