/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int la = 0, sm = 0, d = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            d++;
        } else if (s[i] >= 65 && s[i] <= 90) {
            la++;
        } else if (s[i] >= 97 && s[i] <= 122) {
            sm++;
        }
    }
    if (s.size() >= 5 && la >= 1 && sm >= 1 && d >= 1) {
        cout << "Correct\n";
    } else {
        cout << "Too weak\n";
    }
    return 0;
}
