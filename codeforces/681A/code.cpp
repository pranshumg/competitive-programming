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
        int b, a;
        cin >> s >> b >> a;
        if (b >= 2400 && (a - b) > 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
