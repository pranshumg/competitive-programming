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
    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > 0) {
            st.insert(v[i]);
        }
    }
    cout << st.size();
    return 0;
}
