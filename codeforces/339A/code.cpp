/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i += 2) {
        for (int j = 0; j < s.length() - i - 1; j += 2) {
            if (s[j] > s[j + 2]) {
                swap(s[j], s[j + 2]);
            }
        }
    }
    cout << s << '\n';
    return 0;
}