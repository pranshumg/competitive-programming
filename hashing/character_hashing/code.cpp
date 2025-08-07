// using vector
// TC - O(n)
// SC - O(n)
/*
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> hash(256, 0);
    for (char c: s) {
        hash[c]++;
    }
    int q;
    cin >> q;
    while (q--) {
        char curr;
        cin >> curr;
        cout << hash[curr - 'a'] << ' ';
    }
    return 0;
}
*/

// using unordered_map
// TC  - O(1) and O(n) worst case
// SC - O(n)
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    // use map for sorted order
    // map gives TC - O(log n)
    unordered_map<char, int> mp; 
    char curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        mp[curr]++;
    }
    int q;
    cin >> q;
    while (q--) {
        char el;
        cin >> el;
        cout << mp[el] << ' ';
    } 
    return 0;
}