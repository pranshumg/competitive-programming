/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    for (int i = 0; i < s.length(); i++) {
        int d = s[i] - '0';
        int inv = 9 - d;
 
        if (i == 0 && inv == 0) {
            continue;
        }
        if (inv < d) {
            s[i] = inv + '0';
        }
    }
 
    cout << s;
    
    return 0;
}