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
        string s = "Timur", r;
        int n;
        cin >> n;
        cin >> r;
        if (n != 5) cout << "NO\n";
        else {
            sort(s.begin(), s.end());
            sort(r.begin(), r.end());
            if (r == s) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}