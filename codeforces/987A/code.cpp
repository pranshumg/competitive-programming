/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, string> mp = {
        {"purple", "Power"},
        {"green", "Time"},
        {"blue", "Space"},
        {"orange", "Soul"},
        {"red", "Reality"},
        {"yellow", "Mind"}
    };
    int n;
    cin >> n;
    if (n == 0) {
        cout << 6 <<'\n';
        for (auto it: mp) {
            cout << it.second << '\n';
        }
        return 0;
    }
    string curr;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<string> res;
    for (auto it1: mp) {
        for (auto it2: v) {
            if (find(v.begin(), v.end(), it1.first) == v.end()) {
                res.emplace_back(it1.second);
                break;
            }
        }
    }
    cout << 6 - n << '\n';
    for (auto it: res) {
        cout << it << '\n';
    }
    return 0;
}
