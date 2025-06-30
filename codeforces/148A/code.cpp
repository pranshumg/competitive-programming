/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int> st;
    for (int i = k; i <= d; i += k) st.insert(i);
    for (int i = l; i <= d; i += l) st.insert(i);
    for (int i = m; i <= d; i += m) st.insert(i);
    for (int i = n; i <= d; i += n) st.insert(i);
    cout << st.size();
    return 0;
}