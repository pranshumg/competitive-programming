/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, k;
    cin >> n >> k;
    int K = 0;
    set<int> st;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr == k) {
            K++;
        }
        if (curr < k) {
            st.insert(curr);
        }
    }
    int small = k - (int)st.size();
    cout << max(K, small) << '\n';
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}