#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &vec, int n) {
    for (int i = 0; i < n - 1; i++) {
        int did_swap = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j + 1] < vec[j]) {
                swap(vec[j], vec[j + 1]);
                did_swap = 1;
            }
        }
        if (did_swap == 0) break;           
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    bubble_sort(vec, n);
    for (auto it : vec) cout << it << " ";
    return 0;
}