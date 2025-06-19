// Optimal:

#include <bits/stdc++.h>
using namespace std;

vector<int> union_of_two_arrays(vector<int> &vec1, int n1, vector<int> &vec2, int n2) {
    int i = 0, j = 0;
    vector<int> union_vec;
    while (i < n1 && j < n2) {
        if (vec1[i] <= vec2[j]) {
            if (union_vec.size() == 0 || union_vec.back() != vec1[i]) union_vec.emplace_back(vec1[i]);       
            i++;
        } else {
            if (union_vec.size() == 0 || union_vec.back() != vec2[j]) union_vec.emplace_back(vec2[j++]);
            j++;
        }
    }
    while (i < n1) {
        if (union_vec.size() == 0 || union_vec.back() != vec1[i]) union_vec.emplace_back(vec1[i]);
        i++;
    }
    while (j < n2) {
        if (union_vec.size() == 0 || union_vec.back() != vec2[j]) union_vec.emplace_back(vec2[j]);
        j++;
    }
    return union_vec;
} 

int main() { 
    int n1;
    cin >> n1;
    vector<int> vec1(n1);
    for (int i = 0; i < n1; i++) cin >> vec1[i];
    int n2;
    cin >> n2;
    vector<int> vec2(n2);
    for (int i = 0; i < n2; i++) cin >> vec2[i];
    vector<int> union_vec = union_of_two_arrays(vec1, n1, vec2, n2);
    for (auto it : union_vec) cout << it << " ";
    return 0;
}

// Brute Force:

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> union_of_two_arrays(vector<int> &vec1, int n1, vector<int> &vec2, int n2) {
    set<int> st;
    for (int i = 0; i < n1; i++) st.insert(vec1[i]);
    for (int i = 0; i < n2; i++) st.insert(vec2[i]); 
    vector<int> union_vec;
    for (auto it : st) union_vec.emplace_back(it);
    return union_vec;
} 

int main() { 
    int n1;
    cin >> n1;
    vector<int> vec1(n1);
    for (int i = 0; i < n1; i++) cin >> vec1[i];
    int n2;
    cin >> n2;
    vector<int> vec2(n2);
    for (int i = 0; i < n2; i++) cin >> vec2[i];
    vector<int> union_vec = union_of_two_arrays(vec1, n1, vec2, n2);
    for (auto it : union_vec) cout << it << " ";
    return 0;
}
*/