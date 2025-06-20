/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        int j = 1;
        while (j < s.length()) {
            if (s[j] == s[j - 1]) {
                j = 1; 
                break;
            }
            j++;
        }
        cout << j << endl;
    }

    return 0;
}