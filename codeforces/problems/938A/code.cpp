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
    string s, r = "aeiouy";
    cin >> s;
    for (int i = 0; i < n - 1; i++) {
        if (r.find(s[i]) != string::npos && r.find(s[i + 1]) != string::npos) {
            s.erase(i + 1, 1);
            n = s.size();
            i--;
        }
    }
    cout << s;
    return 0;
}
