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
    int upp = 0, low = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) upp++;
        else low++;
    }
    if (upp > low) {
        for (int i = 0; i < s.size(); i++) cout << (char)toupper(s[i]);
    } else {
        for (int i = 0; i < s.size(); i++) cout << (char)tolower(s[i]);
    }
    return 0;
}
