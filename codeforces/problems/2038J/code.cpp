/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p, people = 0, seats = 0;
    cin >> n;
    char c;
    while (n--) {
        cin >> c >> p;
        if (c == 'P') {
            people += p;
        } else {
            seats += p;
            if (seats - people > 0) {
                cout << "YES\n";
                people = 0;
            } else {
                cout << "NO\n";
                people -= seats;
            }
            seats = 0;
        }
    }
    return 0;
}