/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, r, q;
    cin >> s >> r >> q;
    for (int i = 0; i < q.size(); i++) {
        if (q[i] >= '0' && q[i] <= '9') {
            continue;
        } else if (q[i] >= 'A' && q[i] <= 'Z') {
            q[i] = toupper(r[s.find(tolower(q[i]))]);
        } else {
            q[i] = r[s.find((q[i]))];
        }
    }
    cout << q;
    return 0;
}
