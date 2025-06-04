#include <iostream>
#include <limits.h>
using namespace std;
#include <vector>
//-----------------------------------------------------------
// int findUnique(vector<int> arr) {
//   int ans = 0;
//   for (int i = 0; i < arr.size(); i++) {
//     ans = ans ^ arr[i];
//   }
//-----------------------------------------------------------

// int Union(vector<int> arr1, vector<int> arr2) {
//   vector<int> newarr;
//   for (int i = 0; i < arr1.size(); i++) {
//     newarr.push_back(arr1[i]);
//   }

//   for (int i = 0; i < arr2.size(); i++) {
//     newarr.push_back(arr2[i]);
//   }
//   int ans = 0;
//   for (int i = 0; i < newarr.size(); i++) {
//     ans = ans ^ newarr[i];
//   }

//   return ans;
// }

//   return ans;
// }
//,------------------------------------------------------------------
int main() {
  // creating and using vector
  // vector<int> arr;

  // cout << arr.size() << endl;
  // cout << arr.capacity() << endl;

  // arr.push_back(4);
  // arr.push_back(6);

  // for (int i = 0; i < arr.size(); i++) {
  //   cout << arr[i] << " " << endl;
  // }
  //---------------------------------------------------------

  // Questions -> Find unique value
  // int n;
  // cin >> n;

  // vector<int> arr(n);

  // cout << "Enter the elements in vector " << endl;

  // for (int i = 0; i < arr.size(); i++) {
  //   cin >> arr[i];
  // }

  // int uniqueValue = findUnique(arr);

  // cout << "This is unique value " << uniqueValue << endl;
  //-----------------------------------------------------------------

  // Question -> Union of array

  // int n1, n2;
  // cin >> n1;
  // cin >> n2;
  // vector<int> arr1(n1);
  // vector<int> arr2(n2);

  // cout << "Put elements in array 1 " << endl;
  // for (int i = 0; i < arr1.size(); i++) {
  //   cin >> arr1[i];
  // }
  // cout << "Put elements in array 2 " << endl;
  // for (int i = 0; i < arr2.size(); i++) {
  //   cin >> arr2[i];
  // }

  // int nass = Union(arr1, arr2);

  // cout << "Here is the union " << nass << endl;

  //--------------------------------------------------------

  // Question intersection of 2 arrays..(start form here)

  // vector<int> arr1{1, 3, 4, 24, 2};
  // vector<int> arr2{1, 3, 3, 3, 24, 224, 22};
  // vector<int> result;

  // for (int i = 0; i < arr1.size(); i++) {
  //   for (int j = 0; j < arr2.size(); j++) {
  //     if (arr1[i] == arr2[j]) {
  //       result.push_back(arr1[i]);
  //       arr2[j] = -1; // Mark arr2 element as used
  //       break;        // Stop after first match to avoid duplicates
  //     }
  //   }
  // }

  // for (int i = 0; i < result.size(); i++) {
  //   cout << result[i] << endl;
  // }
  //--------------------------------------------------------------------------

  // Question of Pair sum;

  // vector<int> arr{10, 20, 40, 60, 70};

  // for (int i = 0; i < arr.size(); i++) {
  //   int element = arr[i];

  //   for (int j = i + 1; j < arr.size(); j++) {
  //     if (element + arr[j] == 80) {
  //       cout << "(" << element << "," << arr[j] << ")" << endl;
  //     }
  //   }
  // }
  //--------------------------------------------------------------------------------

  // Question of Triplet sum;

  // vector<int> arr{10, 20, 40, 60, 70};

  // for (int i = 0; i < arr.size(); i++) {
  //   int element = arr[i];

  //   for (int j = i + 1; j < arr.size(); j++) {
  //     for (int k = j + 1; k < arr.size(); k++) {
  //       if (element + arr[j] + arr[k] == 100) {
  //         cout << "(" << element << "," << arr[j] << "," << arr[k] << ")"
  //              << endl;
  //       }
  //     }
  //   }
  // }

  //-----------------------------------------------------------------------------

  // Question Sort ZERO and ONE

  // vector<int> arr{0, 1, 0, 0, 1, 0, 0, 0, 1, 1};

  // int start = 0;
  // int end = arr.size() - 1;
  // int i = 0;

  // while (i != end) {
  //   if (arr[i] == 0) {
  //     swap(arr[start], arr[i]);
  //     start++;
  //     i++;
  //   } else {
  //     swap(arr[end], arr[i]);
  //     end--;
  //   }
  // }
  // for (auto value : arr) {
  //   cout << value << endl;
  // }
  //-----------------------------------------------------------------------------

  //-----------------------End for Today----------------
}
