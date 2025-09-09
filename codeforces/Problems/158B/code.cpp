/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int one = 0, two = 0, three = 0, four = 0;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr == 1) {
            one++;
        } else if (curr == 2) {
            two++;  
        } else if (curr == 3) {
            three++;
        } else {
            four++;
        }
    }
    int ans = 0;
    if (four > 0) {
        ans += four;
    }
    if (three > 0) {
        ans += three;
        if (one > 0) {
            if (three >= one) {
                one = 0;
            } else {
                one -= three;
            }
        }
    }
    if (two > 0) {
        if (two % 2 == 0) {
            ans += two / 2;
        } else {
            ans += (two / 2) + 1;
            if (one >= 2) {
                one -= 2;
            } else if (one <= 1) {
                one -= 1;
            }
        }
    } 
    if (one > 0) {
        if (one % 4 == 0) {
            ans += one / 4;
        } else {
            ans += (one / 4) + 1;
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}