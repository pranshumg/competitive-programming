/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin >> y;
    for (int i = y + 1; ; i++) {
        set<int> st;
        int m = i;
        while (m > 0) {
            int d = m % 10;
            st.insert(d);
            m /= 10;
        }
        if (st.size() == 4) {
            cout << i;
            break;
        }
    }
    return 0;
}