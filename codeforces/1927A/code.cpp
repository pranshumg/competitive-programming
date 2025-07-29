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
        string s;
        cin >> s;
        auto i = s.find('B'), j = s.rfind('B');
        cout << j - i + 1 << '\n';
    }
    return 0;
}