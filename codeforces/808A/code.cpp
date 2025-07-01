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
    int y = stoi(s);
    int ny = ((s[0] - '0') + 1) * pow(10, s.size() - 1);
    cout << ny - y << '\n';
    return 0;
}