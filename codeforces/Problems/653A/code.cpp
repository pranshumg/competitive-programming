/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, curr;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        st.insert(curr);
    }
    vector<int> v(st.begin(), st.end());
    for (int i = 0; i < (int)v.size() - 2; i++) {
        if (v[i + 2] - v[i] < 3) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}