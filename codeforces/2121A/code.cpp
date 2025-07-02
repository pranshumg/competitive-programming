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
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        int maxi = *(max_element(a.begin(), a.end())), mini = *(min_element(a.begin(), a.end()));
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
