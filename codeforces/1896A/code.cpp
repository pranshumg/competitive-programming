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
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];  
        vector<int> sorted_vec = vec;
        sort(sorted_vec.begin(), sorted_vec.end());
        bool swapped = true;
        while (swapped) {
            swapped = false;
            for (int i = 1; i < n - 1; i++) {
                if (vec[i - 1] < vec[i] && vec[i] > vec[i + 1]) {
                    swap(vec[i], vec[i + 1]);
                    swapped = true;
                }
            }
        }
        if (vec == sorted_vec) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
