#include <bits/stdc++.h>

using namespace std;

// Best TC - O(n)
// Worst TC - O(n²)
void insertion_sort(vector<int>& v, int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && v[j - 1] > v[j]) {
            swap(v[j - 1], v[j--]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }    
    insertion_sort(v, n);
    for (auto it: v) {
        cout << it << ' ';
    }
    cout << '\n';
    return 0;
}