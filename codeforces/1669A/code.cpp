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
        int r;
        cin >> r;
        if (r >= 1900) cout << "Division 1\n";
        else if (r <= 1899 && r >= 1600) cout << "Division 2\n";
        else if (r <= 1599 && r >= 1400) cout << "Division 3\n";
        else cout << "Division 4\n";
    }
    return 0;
}