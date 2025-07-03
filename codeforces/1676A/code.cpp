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
    while (t--) {
        string s;
        cin >> s;
        vector<int> v(6);
        for (int i = 0; i < 6; i++) {
            int n = s[i] - '0';
            v[i] = n;
        }
        int i = 0, j = 5, sum1 = 0, sum2 = 0;
        while (i < j) {
            sum1 += v[i++];
            sum2 += v[j--];
        }
        if (sum1 == sum2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}