#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &vec, int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && vec[j - 1] > vec[j]) {
            swap(vec[j - 1], vec[j]);
            j--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    insertion_sort(vec, n);
    for (auto it : vec) cout << it << " ";
    return 0;
}