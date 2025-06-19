// Optimal:

#include <bits/stdc++.h>
using namespace std;

void move_zeros_to_end(vector<int> &vec, int n) {
    int j;
    for (int i = 0; i < n; i++) {
        if (vec[i] == 0) {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++) {
        if (vec[i] != 0) swap(vec[i], vec[j++]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int k;
    cin >> k;
    move_zeros_to_end(vec, n);
    for (auto it : vec) cout << it << " ";
    return 0;
}

// Brute Force:

/*
#include <bits/stdc++.h>
using namespace std;

void move_zeros_to_end(vector<int> &vec, int n) {
    vector<int> temp;
    for (int i = 0; i < n; i++) if (vec[i] != 0) temp.emplace_back(vec[i]);
    for (int i = 0; i < temp.size(); i++) vec[i] = temp[i];
    for (int i = temp.size(); i < n; i++) vec[i] = 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    int k;
    cin >> k;
    move_zeros_to_end(vec, n);
    for (auto it : vec) cout << it << " ";
    return 0;
}
*/