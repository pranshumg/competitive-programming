/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    vector<int> v1(3), v2(3);
    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            cin >> v1[i];
        } else {
            cin >> v2[i - 3];
        }
    }
    cin >> n;
    int t_cups = accumulate(v1.begin(), v1.end(), 0);
    int t_medals = accumulate(v2.begin(), v2.end(), 0);
    int s_medals = 0, s_cups = 0;
    if (t_cups % 5 == 0) {
        s_medals += t_cups / 5;
    } else {
        s_medals += t_cups / 5 + 1;
    }
    if (t_medals % 10 == 0) {
        s_cups += t_medals / 10;
    } else {
        s_cups += t_medals / 10 + 1;
    }
    if (s_medals + s_cups <= n) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}