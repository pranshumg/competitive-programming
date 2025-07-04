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
    for (char c: s) {
        if (c != '4' && c != '7') {
            cout << "NO";
            return 0;
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n / 2; i++) {
        sum1 += s[i];
        sum2 += s[n / 2 + i];
    }
    if (sum1 == sum2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
