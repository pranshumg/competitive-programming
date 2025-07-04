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
    int curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr != 0) {
            st.insert(curr);
        }
    }
    cout << st.size();
    return 0;
}
