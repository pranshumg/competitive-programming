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
        string b;
        cin >> b;
        if (b.size() == 2) cout << b << '\n';
        else {
            if (b.size() % 2 == 0) {
                for (int i = 0; i < b.size(); i += 2) cout << b[i];
                cout << b[b.size() - 1] << '\n';
            } else {
                for (int i = 0; i < b.size(); i += 2) cout << b[i];
                cout << '\n';
            }
        }
    }
    return 0;
}