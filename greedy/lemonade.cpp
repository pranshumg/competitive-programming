#include <bits/stdc++.h>

using namespace std;

/* Lemonade change */

// TC - O(n), SC - O(1)
bool lemonade(vector<int>& v) {
  int five = 0, ten = 0;
  for (int i = 0; i < (int)v.size(); ++i) {
    if (v[i] == 5) {
      ++five;
    } else if (v[i] == 10) {
      if (five) {
        --five, ++ten;
      } else {
        return false;
      }
    } else {
      if (five && ten) {
        --five, --ten;
      } else if (five >= 3) {
        five -= 3;
      } else {
        return false;
      }
    }
  }
  return true;
}