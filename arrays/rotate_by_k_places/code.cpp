// Optimal:

#include <bits/stdc++.h>
using namespace std;

void rotate_by_k_places(vector<int> &vec, int n, int k) {
    reverse(vec.begin(), vec.begin() + k);
    reverse(vec.begin() + k, vec.end());
    reverse(vec.begin(), vec.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int k;
    cin >> k;
    rotate_by_k_places(vec, n, k);
    for (auto it : vec) cout << it << " ";
    return 0;
}

// Brute Force:

/* 
#include <bits/stdc++.h>
using namespace std;

void rotate_by_k_places(vector<int> &vec, int n, int k) {
    k %= n;
    vector<int> temp;
    for (int i = 0; i < k; i++) temp.emplace_back(vec[i]); 
    for (int i = k; i < n; i++) vec[i - k] = vec[i];
    for (int i = n - k; i < n; i++) vec[i] = temp[i - (n - k)];
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int k;
    cin >> k;
    rotate_by_k_places(vec, n, k);
    for (auto it : vec) cout << it << " ";
    return 0;
} 
*/