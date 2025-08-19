/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[2000], sum = 0, o = 0, e = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                e++;
            } else {
                sum += a[i];
                o++;
            }
        }
        if (o != 0 && e != 0) {
            cout << "YES";
        } else if (o != 0 && e == 0) {
            if (sum % 2 != 0) {
                cout << "YES";
            } else {
                cout << "NO";
            }
        } else {
            cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}