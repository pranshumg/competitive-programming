/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    if (s[0] == s1[0] || s[1] == s1[1] || tolower(s[0]) == tolower(s1[0]) || tolower(s[1]) == tolower(s1[1])) {
        cout << "YES" << endl;
    } else if (s[0] == s2[0] || s[1] == s2[1] || tolower(s[0]) == tolower(s2[0]) || tolower(s[1]) == tolower(s2[1])) {
        cout << "YES" << endl;
    } else if (s[0] == s3[0] || s[1] == s3[1] || tolower(s[0]) == tolower(s3[0]) || tolower(s[1]) == tolower(s3[1])) {
        cout << "YES" << endl;
    } else if (s[0] == s4[0] || s[1] == s4[1] || tolower(s[0]) == tolower(s4[0]) || tolower(s[1]) == tolower(s4[1])) {
        cout << "YES" << endl;
    } else if (s[0] == s5[0] || s[1] == s5[1] || tolower(s[0]) == tolower(s5[0]) || tolower(s[1]) == tolower(s5[1])) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}