#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &vec, int n) {
    for (int i = 0; i < n - 1; i++) {
        int smallest_idx = i;
        for (int j = i + 1; j < n; j++) if (vec[j] < vec[smallest_idx]) smallest_idx = j; 
        swap(vec[i], vec[smallest_idx]);       
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    selection_sort(vec, n);
    for (auto it : vec) cout << it << " ";
    return 0;
}
