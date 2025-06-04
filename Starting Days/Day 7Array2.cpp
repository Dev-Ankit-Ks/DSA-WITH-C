#include <iostream>
#include <limits.h>
using namespace std;
#include <vector>
// void rowisesum(int arr[][3], int row, int column) {
//   cout << "Output" << endl;
//   for (int j = 0; j < column; j++) {
//     int sum = 0;
//     for (int i = 0; i < row; i++) {
//       sum = sum + arr[i][j];
//     }
//     cout << sum << endl;
//   }
// }

// string findKey(int arr[][3], int row, int col, int key) {
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       if (arr[i][j] == key) {
//         return "Founed";
//       }
//     }
//   }
//   return "Not Founed";
// }

// int getMax(int arr[][3], int row, int col) {
//   int MAXI = INT_MIN;
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       if (arr[i][j] > MAXI) {
//         MAXI = arr[i][j];
//       }
//     }
//   }

//   return MAXI;
// }

// void transpose(int arr[][3], int r, int c) {
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++) {
//       swap(arr[i][j], arr[j][i]);
//     }
//   }
// }

// void printArray(int arr[][3], int r, int c) {
//   for (int i = 0; i < r; i++) {
//     for (int j = 0; j < c; j++) {
//       cout << arr[i][j] << ' ';
//     }
//   }
//   cout << endl;
// }

// void sortColors(vector<int> arr) {

// }
int main() {
  // 2D array
  // int arr[2][2] = {{1, 3}, {233, 23}};

  // printing 2d array
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     cout << arr[i][j] << endl;
  //   }
  // }

  // input in 2d array
  // int arr[4][2];

  // for (int i = 0; i < 4; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     cin >> arr[i][j];
  //   }
  // }

  // printing 2d array
  // for (int i = 0; i < 4; i++) {
  //   for (int j = 0; j < 2; j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  //----------------------------------------------------

  // Question -> Sum of all rows

  // int arr[3][3];
  // int row = 3;
  // int column = 3;

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     cin >> arr[i][j];
  //   }
  // }

  // rowisesum(arr, row, column);

  // return 0;

  //---------------------------------------------------

  // Question -> find key
  // int arr[3][3];
  // int row = 3;
  // int column = 3;

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     cin >> arr[i][j];
  //   }
  // }
  // string c = findKey(arr, row, column, 12);

  // cout << c << endl;

  //---------------------------------------------------

  // Question -> Max and Min
  // int arr[3][3];
  // int row = 3;
  // int column = 3;

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     cin >> arr[i][j];
  //   }
  // }

  // int x = getMax(arr, row, column);

  // cout << "Here is the max num" << endl;
  // cout << x << endl;

  //---------------------------------------------------

  // Question -> Transpose of matrix(Doubt)
  // int arr[3][3];
  // int row = 3;
  // int column = 3;

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     cin >> arr[i][j];
  //   }
  // }

  // printArray(arr, row, column);
  // transpose(arr, row, column);

  // printArray(arr, row, column);

  //---------------------------------------------------

  // Question -> sort colors

  // vector<int> arr{0, 1, 1, 1, 2, 0, 2, 1, 2};
  // sortColors(arr);

  //--------------------In Progress---------------------------------
}
