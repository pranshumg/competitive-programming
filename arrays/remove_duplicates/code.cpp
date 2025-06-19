#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int> &vec, int n) {
    int i = 0; 
    for (int j = 1; j < n; j++) {
        if (vec[j] != vec[i]) {
            vec[i + 1] = vec[j];
            i++;
        }
    }
    return i + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int ans = remove_duplicates(vec, n);
    cout << ans << endl;
    for (int i = 0; i < ans; i++) cout << vec[i] << " ";
    return 0;
}