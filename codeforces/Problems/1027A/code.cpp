/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = 0, right = n - 1;
    bool flag = true;
    while (left < right) {
        if (s[left] != s[right]) {
            if (abs((s[left] - '0') - (s[right] - '0')) != 2) {
                flag = false;
                break;
            }
        }
        left++, right--;
    }
    cout << (flag ? "YES\n" : "NO\n");
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