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
    int a;
    cin >> a;
    int hr = stoi(s.substr(0, 2));
    int mi = stoi(s.substr(3, 2));
    int tm = hr * 60 + mi + a;
    int new_hr = (tm / 60) % 24;
    int new_mi = tm % 60;
    printf("%02d:%02d", new_hr, new_mi);
    return 0;
}
