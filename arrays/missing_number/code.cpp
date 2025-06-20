// Brute Force:

/*
#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &vec, int n) {
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) {
            if (vec[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> vec[i];
    cout << missing_number(vec, n);
    return 0;
}
*/

// Hashing:

/*
#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &vec, int n) {
    vector<int> hash(n, 0);
    for (int i = 0; i < n - 1; i++) hash[vec[i]]++;
    for (int i = 0; i < n; i++) if (hash[i] == 0) return i;
    return -1;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> vec[i];
    cout << missing_number(vec, n);
    return 0;
}
*/

// Optimal:

#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &vec, int n) {
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n - 1; i++) {
        xor1 ^= (i + 1);
        xor2 ^= vec[i];
    }
    return xor1 ^ xor2;
}

int main() { 
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> vec[i];
    cout << missing_number(vec, n);
    return 0;
}