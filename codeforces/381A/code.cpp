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
    for (int i = 0; i < n; i++) cin >> v[i];
    int i = 0, sum_s = 0, sum_d = 0;
    while (v.size() != 0) {
        if (i % 2 == 0) {
            if (v[0] < v[n - 1]) {
                sum_s += v[n - 1];
                v.erase(v.end() - 1);
                n = v.size();
            } else {
                sum_s += v[0];
                v.erase(v.begin());
                n = v.size();
            }
        } else {
            if (v[0] < v[n - 1]) {
                sum_d += v[n - 1];
                v.erase(v.end() - 1);
                n = v.size();
            } else {
                sum_d += v[0];
                v.erase(v.begin());
                n = v.size();
            }
        }
        i++;
    }
    cout << sum_s << " " << sum_d;
    return 0;
}