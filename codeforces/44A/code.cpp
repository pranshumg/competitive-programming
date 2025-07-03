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
    vector<pair<string, string>> v(n);
    set<pair<string, string>> st;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        st.insert(v[i]);
    }
    cout << st.size();
    return 0;
}
