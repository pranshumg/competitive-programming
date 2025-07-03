/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mpp;
    for (int i = 0; i < s.size(); i++) {
        mpp[s.substr(i, 2)]++;
    }
    string sub = s.substr(0, 2);
    int maxi = 1;
    for (auto it: mpp) {
        if (it.second > maxi) {
            maxi = it.second;
            sub = it.first;
        }
    }
    cout << sub;
    return 0;
}
