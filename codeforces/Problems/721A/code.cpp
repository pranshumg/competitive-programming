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
    vector<int> sizes;
    int ans = 0, l = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && s[i - 1] == 'B' && s[i] == 'B') {
            l++;
        } else if (s[i] == 'B') {
            ans++, l++;
        } else {
            if (l != 0) {
                sizes.push_back(l);
            }
            l = 0;
        }
    }
    if (l != 0) {
        sizes.push_back(l);
    }
    cout << ans << '\n';
    if (ans != 0) {
        for (auto it: sizes) {
            cout << it << " ";
        }
    } 
    return 0;
}
