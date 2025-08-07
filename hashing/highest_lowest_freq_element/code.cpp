#include <bits/stdc++.h>

using namespace std;

// using vector
void func1(vector<int>& v, int n) {
    vector<int> hash(1000000, 0);
    for (int i = 0; i < n; i++) {
        hash[v[i]]++;
    } 
    int max_el = v[0], max_freq = hash[v[0]], min_el = v[0], min_freq = hash[v[0]];
    for (auto it: v) {
        if (hash[it] > max_freq) {
            max_el = it, max_freq = hash[it];
        }
        if (hash[it] < min_freq) {
            min_el = it, min_freq = hash[it];
        }
    }
    cout << max_el << ' ' << min_el << '\n';
}

// using map
void func2(vector<int>& v, int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
    }
    int max_el = v[0], max_freq = mp[v[0]], min_el = v[0], min_freq = mp[v[0]];
    for (auto it: mp) {
        if (it.second > max_freq) {
            max_el = it.first, max_freq = it.second;
        }
        if (it.second < min_freq) {
            min_el = it.first, min_freq = it.second;
        }
    }
    cout << max_el << ' ' << min_el << '\n';
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }    
    func2(v, n);
    return 0;
}