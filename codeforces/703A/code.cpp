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
    int m_won = 0, c_won = 0;
    while (n--) {
        int m, c;
        cin >> m >> c;  
        if (m > c) {
            m_won++;
        } else if (c > m) {
            c_won++;
        }
    }
    if (m_won > c_won) {
        cout << "Mishka";
    } else if (c_won > m_won) {
        cout << "Chris";
    } else {
        cout << "Friendship is magic!^^";
    }
    return 0;
}