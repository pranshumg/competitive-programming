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
    cin >> s;
    int sf = 0, fs = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'S' && s[i + 1] == 'F') {
            sf++;
        } else if (s[i] == 'F' && s[i + 1] == 'S') {
            fs++;
        }
    }
    if (sf > fs) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
