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
        string s;
        cin >> s;
        int A = 0, B = 0;
        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A') {
                A++;
            } else {
                B++;
            }
        }
        A > B ? cout << "A\n": cout << "B\n";
    }
    return 0;
}
