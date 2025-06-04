#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
#include <string.h>
using namespace std;
#include <vector>
// bool checkPalin(string s, int i, int j) {
//   while (i <= j) {
//     if (s[i] != s[j]) {
//       return false;
//     } else {
//       i++;
//       j--;
//     }
//   }
//   return true;
// }

// bool validPalen(string s) {
//   int i = 0;
//   int j = s.length() - 1;

//   while (i <= j) {
//     if (s[i] != s[j]) {
//       return checkPalin(s, i + 1, j) || checkPalin(s, i, j - 1);
//     } else {
//       i++;
//       j--;
//     }
//   }
//   return true;
// }

int main() {
  // Question -> Adjcent Character
  // string ans = "";
  // string s = "bnnaola";

  // int i = 0;
  // while (i < s.length()) {
  //   if (ans.length() > 0) {
  //     if (ans[ans.length() - 1] == s[i]) {
  //       ans.pop_back();
  //     } else {
  //       ans.push_back(s[i]);
  //     }
  //   } else {
  //     ans.push_back(s[i]);
  //   }
  //   i++;
  // }

  // cout << ans << endl;
  //----------------------------------------------------
  // Question -> Substring Remover
  // string s = "daabcbaabcbc";
  // string part = "abc";
  // int pos = s.find(part);
  // while (pos != string::npos) {
  //   s.erase(pos, part.length());
  //   pos = s.find(part);
  // }
  // cout << s << endl;
  //------------------------------------------------------
  // Question -> Valid Palendrome ||
  // bool ans = validPalen("abca");
  // cout << boolalpha << ans << endl;
  return 0;
}
