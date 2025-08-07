// using vector
// TC - O(n + 10⁶)
// SC - O(n + 10⁶)
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n), hash(1000000, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        hash[v[i]]++;
    }
    int q;
    cin >> q;
    while (q--) {
        int curr;
        cin >> curr;
        cout << hash[curr] << ' ';
    }
    return 0;
}
*/

// using unordered_map
// TC - O(1) and O(n) worst case
// SC - O(n) 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, curr;
    cin >> n;
    // use map for sorted order
    // map gives TC - O(log n)
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        mp[curr]++;
    }
    int q;
    cin >> q;
    while (q--) {
        int el;
        cin >> el;
        cout << mp[el] << ' ';
    } 
    return 0;
}