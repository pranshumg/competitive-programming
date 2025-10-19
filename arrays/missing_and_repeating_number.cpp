#include <bits/stdc++.h>
using namespace std;

/* Missing and repeated number */

// Brute (TC - O(n²), SC - O(1))
vector<int> missing_and_repeated(vector<int>& v, int n) {
  int miss = -1, rep = -1;
  for (int i = 1; i <= n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (v[j] == i) {
        cnt++;
      }
    }
    if (cnt == 0) {
      miss = i;
    } else if (cnt == 2) {
      rep = i;
    }
    if (miss != -1 && rep != -1) {
      break;
    }
  }
  return {miss, rep};
}

// Better (TC - O(n), SC - O(n))
vector<int> missing_and_repeated_better(vector<int>& v, int n) {
  int miss = -1, rep = -1;
  vector<int> hash(n + 1, 0);
  for (int i = 0; i < n; i++) {
    hash[v[i]]++;
  }
  for (int i = 1; i <= n; i++) {
    if (hash[i] == 0) {
      miss = i;
    } else if (hash[i] == 2) {
      rep = i;
    }
    if (miss != -1 && rep != -1) {
      break;
    }
  }
  return {miss, rep};
}

// Optimal 1 (Maths) (TC - O(n), SC - O(1))
vector<int> missing_and_repeated_opt1(vector<int>& v, int n) {
  int SN = (n * (n + 1)) / 2;
  int S2N = (n * (n + 1) * (2 * n + 1)) / 6;
  int S = 0, S2 = 0;
  for (int i = 0; i < n; i++) {
    S += v[i];
    S2 += v[i] * v[i];
  }
  int val1 = S - SN;
  int val2 = (S2 - S2N) / val1;
  int miss = (val1 + val2) / 2;
  int rep = miss - val1;
  return {miss, rep};
}

// Optimal (XOR)
vector<int> missing_and_repeated_opt2(vector<int>& v, int n) {
  // TODO: implement XOR-based approach
}
