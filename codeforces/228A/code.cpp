/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(4);
    for (int i = 0; i < 4; i++) cin >> v[i];
    set<int> st;
    for (int i = 0; i < 4; i++) st.insert(v[i]);
    cout << 4 - st.size();
    return 0;
}