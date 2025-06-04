//------------------HomeWork of array---------------

#include <iostream>
#include <limits.h>
using namespace std;
#include <vector>

int main() {
  // Questions -> Dutch National Flag Problem
  // my soln;
  // vector<int> arr{2, 0, 1, 0, 1, 0, 2};
  // int zero, one, two;
  // zero = one = two = 0;
  // for (int i = 0; i < arr.size(); i++) {
  //   if (arr[i] == 0) {
  //     zero++;
  //   } else if (arr[i] == 1) {
  //     one++;
  //   } else {
  //     two++;
  //   }
  // }

  // arr.clear();

  // for (int i = 0; i < zero; i++) {
  //   arr.push_back(0);
  // }
  // for (int i = 0; i < one; i++) {
  //   arr.push_back(1);
  // }
  // for (int i = 0; i < two; i++) {
  //   arr.push_back(2);
  // }

  // for (int v = 0; v < arr.size(); v++) {
  //   cout << arr[v] << endl;
  // }
  //----------------------------------------------------

  // good soln(three pointer approach);
  // vector<int> arr{2, 0, 1};
  // int l = 0, m = 0, h = arr.size() - 1;
  // while (m <= h) {
  //   if (arr[m] == 0) {
  //     swap(arr[m], arr[l]);
  //     l++;
  //     m++;
  //   } else if (arr[m] == 1) {
  //     m++;
  //   } else {
  //     swap(arr[m], arr[h]);
  //     h--;
  //   }
  // }

  // for (int v = 0; v < arr.size(); v++) {
  //   cout << arr[v] << endl;
  // }

  //---------------------------------------------------------

  // Question -> Move all -nv in lft side (2 pointer approach)

  // vector<int> arr{1, 2, -3, 4, -5, 6};

  // int l = 0, h = arr.size() - 1;

  // while (l <= h) {
  //   if (arr[l] < 0) {
  //     l++;
  //   } else if (arr[h] > 0) {
  //     h--;
  //   } else {
  //     swap(arr[l], arr[h]);
  //   }
  // }
  // for (int v = 0; v < arr.size(); v++) {
  //   cout << arr[v] << endl;
  // }

  //-----------------Thats for today-----------------------------------------
}
