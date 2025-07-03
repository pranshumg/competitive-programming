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
    set<int> st;
    int p;
    cin >> p;
    vector<int> v1(p);
    for (int i = 0; i < p; i++) {
        cin >> v1[i];
        st.insert(v1[i]);
    }
    int q;
    cin >> q;
    vector<int> v2(q);
    for (int i = 0; i < q; i++) {
        cin >> v2[i];
        st.insert(v2[i]);
    }
    if (st.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}