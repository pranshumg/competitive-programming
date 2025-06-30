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
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int i = 0, sum_s = 0, sum_d = 0;
    while (vec.size() != 0) {
        if (i % 2 == 0) {
            if (vec[0] < vec[n - 1]) {
                sum_s += vec[n - 1];
                vec.erase(vec.end() - 1);
                n = vec.size();
            } else {
                sum_s += vec[0];
                vec.erase(vec.begin());
                n = vec.size();
            }
        } else {
            if (vec[0] < vec[n - 1]) {
                sum_d += vec[n - 1];
                vec.erase(vec.end() - 1);
                n = vec.size();
            } else {
                sum_d += vec[0];
                vec.erase(vec.begin());
                n = vec.size();
            }
        }
        i++;
    }
    cout << sum_s << " " << sum_d;
    return 0;
}