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
    int ans;
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == '1') {
            ans = 0;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;
            } else {
                ans += 10;
            }
        } else if (s[0] == '2') {
            ans = 10;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        } else if (s[0] == '3') {
            ans = 20;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        } else if (s[0] == '4') {
            ans = 30;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        } else if (s[0] == '5') {
            ans = 40;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        } else if (s[0] == '6') {
            ans = 50;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        } else if (s[0] == '7') {
            ans = 60;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        } else if (s[0] == '8') {
            ans = 70;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        } else {
            ans = 80;
            if (s.length() == 1) {
                ans += 1; 
            } else if (s.length() == 2) {
                ans += 3;
            } else if (s.length() == 3) {
                ans += 6;;
            } else {
                ans += 10;
            }
        }
        cout << ans << '\n';
    } 
    return 0;
}