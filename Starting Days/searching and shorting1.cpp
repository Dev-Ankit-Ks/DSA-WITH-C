#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;
#include <vector>
//------------------------------------------------------------
// int binarySearch(int arr[], int size, int target) {
//   int start = 0;
//   int end = size - 1;
//   int mid = (start + end) / 2;

//   while (start <= end) {
//     int element = arr[mid];

//     if (element == target) {
//       return mid;
//     } else if (target < element) {
//       end = mid - 1;
//     } else {
//       start = mid + 1;
//     }
//     mid = (start + end) / 2;
//   }

//   return -1;
// }

//------------------------------------------------------------

// int firstOccurence(vector<int> v, int target) {
//   int start = 0;

//   int end = v.size() - 1;

//   int mid = (start + end) / 2;
//   int ans = -1;

//   while (start <= end) {
//     int element = v[mid];
//     if (element == target) {
//       ans = mid;
//       end = mid - 1;
//     } else if (target > element) {
//       start = mid + 1;
//     } else if (target < element) {
//       end = mid - 1;
//     }
//     mid = (start + end) / 2;
//   }

//   return ans;
// }
//------------------------------------------------------------
// int lastOccurence(vector<int> v, int target) {
//   int start = 0;

//   int end = v.size() - 1;

//   int mid = (start + end) / 2;
//   int ans = -1;

//   while (start <= end) {
//     int element = v[mid];
//     if (element == target) {
//       ans = mid;
//       start = mid + 1;
//     } else if (target > element) {
//       start = mid + 1;
//     } else if (target < element) {
//       end = mid - 1;
//     }
//     mid = (start + end) / 2;
//   }

//   return ans;
// }
//------------------------------------------------------------

int main() {
  // int arr[] = {2, 5, 3, 9, 22, 0};
  // int size = 6;
  // int target = 9;

  // int indexOftarget = binarySearch(arr, size, target);

  // if (indexOftarget == -1) {
  //   cout << "target not found" << endl;
  // } else {
  //   cout << "target found at " << indexOftarget << endl;
  // }

  // vector<int> v{2, 4, 9, 99, 93, 5};

  // if (binary_search(v.begin(), v.end(), 3)) {
  //   cout << "Founded " << endl;
  // }

  //---------------------------------------------------------------------

  // Question find the first occurence

  // vector<int> v{1, 3, 4, 4, 5, 5, 9};

  // int target = 5;
  // int indexOfFirstOcc = firstOccurence(v, target);

  // cout << "ans is " << indexOfFirstOcc << endl;

  //----------------------------------------------------------------------

  // Question find the last occurence

  // vector<int> v{1, 3, 4, 4, 5, 5, 5, 5, 9};

  // int target = 5;
  // int indexOfFirstOcc = lastOccurence(v, target);

  // cout << "ans is " << indexOfFirstOcc << endl;

  //--------------------------------------------------------------------

  // Using library for finding first and last element 
  // for fist occur -> Lowerbound
  // for last occur -> Uppe rbound

  //--------------------------------------------------------------------

  // HW
  // Queston find total occurence(first occuernce - last occuernce + 1)

  // Question find the missing number bwt one to n


  // Question Peak Mounatain Question

  
}
