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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
            cin >> v[i];
        int maxi = *(max_element(v.begin(), v.end())), mini = *(min_element(v.begin(), v.end()));
        if (s >= maxi)
            cout << s - mini  << '\n';
        else if (s <= mini)
            cout << maxi - s << '\n';
        else if (maxi - s < s - mini) 
            cout << (maxi - s) + (maxi - mini) << '\n';
        else
            cout << (s - mini) + (maxi - mini) << '\n';
    }
    return 0;
}
