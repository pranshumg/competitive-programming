/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, r;
    cin >> s >> r;
    int hr_s = stoi(s.substr(0, 2)), min_s = stoi(s.substr(3, 2));
    int hr_r = stoi(r.substr(0, 2)), min_r = stoi(r.substr(3, 2));
    int tm = ((hr_s * 60 + min_s) + (hr_r * 60 + min_r)) / 2;
    int new_hr = (tm / 60) % 24, new_min = tm % 60;
    printf("%02d:%02d", new_hr, new_min);
    return 0;
}
