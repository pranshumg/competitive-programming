#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &vec, int n) {
    int largest = vec[0];
    for (int i = 0; i < n; i++) if (vec[i] > largest) largest = vec[i];
    return largest;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int largest = largest_element(vec, n);
    cout << largest;
    return 0;
}