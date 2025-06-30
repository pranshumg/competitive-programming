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
    vector<int> vec1(p);
    for (int i = 0; i < p; i++) {
        cin >> vec1[i];
        st.insert(vec1[i]);
    }
    int q;
    cin >> q;
    vector<int> vec2(q);
    for (int i = 0; i < q; i++) {
        cin >> vec2[i];
        st.insert(vec2[i]);
    }
    if (st.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}