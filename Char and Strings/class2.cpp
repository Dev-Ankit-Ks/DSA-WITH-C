#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
#include <string.h>
using namespace std;
#include <vector>
//------------------------------------------------------
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
//------------------------------------------------------
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
  // Question -> Valid Palendrome || (Not Clear)
  // bool ans = validPalen("abca");
  // cout << boolalpha << ans << endl;
  //------------------------------------------------------
  // Question -> Minimum Time Differnce
  // vector<string> timePoints = {"23:59", "00:00"};
  // vector<int> minutes;

  // for (int i = 0; i < timePoints.size(); i++) {
  //   string curr = timePoints[i];
  //   int hour = stoi(curr.substr(0, 2));
  //   int min = stoi(curr.substr(3, 2));
  //   int total_minutes = hour * 60 + min;
  //   minutes.push_back(total_minutes);
  // }

  // sort(minutes.begin(), minutes.end());

  // int mini = INT_MAX;
  // int n = minutes.size() - 1;

  // for (int i = 0; i < n; i++) {
  //   int diff = minutes[i + 1] - minutes[i];
  //   mini = min(mini, diff);
  // }

  // int lastDiff = (minutes[0] + 1440) - minutes[n];
  // mini = min(mini, lastDiff);

  // cout << mini << endl;
  //------------------------------------------------------
  // Question Palindromic Substring
  //<Start From Here...>

  return 0;
}
