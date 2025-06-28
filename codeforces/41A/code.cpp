/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, r;
    cin >> s;
    cin >> r;
    int start = 0, end = s.size() - 1;
    while (start < end) swap(s[start++], s[end--]);
    if (s == r) cout << "YES";
    else cout << "NO"; 
    return 0;
}