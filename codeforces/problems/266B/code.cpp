/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;       
    while (t--) {
        int i = 0;
        while (i < s.size() - 1) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i += 2;
            } else i++;
        }
    }   cout << s;
    return 0;
}