// Brute Force:

/*
#include <bits/stdc++.h>
using namespace std;

void single_number(vector<int> &vec, int n) {
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (vec[i] == vec[j]) cnt++;
        }
        if (cnt == 1) cout << vec[i];
    }
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    single_number(vec, n);
    return 0;
}
*/

// Hashing:

/*
#include <bits/stdc++.h>
using namespace std;

void single_number(vector<int> &vec, int n) {
    map<long long, int> mpp;
    for (int i = 0; i < n; i++) mpp[vec[i]]++;
    for (auto it : mpp) if (it.second == 1) cout << it.first;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    single_number(vec, n);
    return 0;
}
*/

// Optimal:

#include <bits/stdc++.h>
using namespace std;

int single_number(vector<int> &vec, int n) {
    int XOR = 0;
    for (int i = 0; i < n; i++) XOR ^= vec[i];
    return XOR;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    cout << single_number(vec, n);
    return 0;
}