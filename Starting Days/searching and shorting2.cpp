#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
using namespace std;
#include <vector>

// int findSqrt(int target) {
//   int start = 0;
//   int end = target;
//   int mid = start + (end - start) / 2;
//   int ans = -1;
//   while (start <= end) {
//     if (target == mid * mid) {
//       return mid;
//     } else if (mid * mid > target) {
//       end = mid - 1;
//     } else {
//       ans = mid;
//       start = mid + 1;
//     }
//     mid = start + (end - start) / 2;
//   }
//   return ans;
// }


int main() {

  double n;
  cout << "Enter the number : " << endl;
  cin >> n;
  // int target = 16;

  // int ansd = findSqrt(target);

  // cout << "here is answer " << ansd << endl;

  double start = 1;
  double end = n;
  double mid = (start + end) / 2;
}
