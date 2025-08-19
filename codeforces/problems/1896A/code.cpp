/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];  
        vector<int> sorted_v = v;
        sort(sorted_v.begin(), sorted_v.end());
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i = 1; i < n - 1; i++) {
                if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
                    swap(v[i], v[i + 1]);
                    swapped = true;
                }
            }
        }
        if (v == sorted_v) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
