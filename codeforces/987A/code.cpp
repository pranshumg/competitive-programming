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
    int p = 0, g = 0, b = 0, o = 0, r = 0, y = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        switch(s[0]) {
        case 'p':
            p = 1;
            break;
        case 'g':
            g = 1;
            break;
        case 'b':
            b = 1;
            break;
        case 'o':
            o = 1;
            break;
        case 'r':
            r = 1;
            break;
        case 'y':
            y = 1;
            break;
        }
    }
    cout << 6 - n << '\n';
    if(!p) cout << "Power\n";
    if(!g) cout << "Time\n";
    if(!b) cout << "Space\n";
    if(!o) cout << "Soul\n";
    if(!r) cout << "Reality\n";
    if(!y) cout << "Mind\n";
    return 0;
}
