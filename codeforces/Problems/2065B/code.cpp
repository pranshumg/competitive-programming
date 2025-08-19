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
    while (n--) {
        string s;
        cin >> s;
        int j = 1;
        while (j < s.length()) {
            if (s[j] == s[j - 1]) {
                j = 1; 
                break;
            }
            j++;
        }
        cout << j << '\n';
    }
    return 0;
}