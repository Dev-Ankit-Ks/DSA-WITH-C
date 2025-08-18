#include <iostream>;
using namespace std;
#include <limits.h>;
#include <string>;

// int findCharLastIndex(string name , char target  , int n, int& ans){
//      if(n < 0){   // base case
//         return 0;
//     }
//     if(name[n] == target){
//         ans = n;
//         return 0;
//     }
//     return findCharLastIndex(name , target, n-1 , ans);
// }


// int main(){
//     string name = "kanit";
//     char target = 'k';
//     int n = name.length()-1;
//     int ans = 0;

//     findCharLastIndex(name , target , n , ans);

//     cout << ans << endl;
// }



// string revString(string name ,int n){
//      if(n < 0){   // base case
//         return "";
//     }
//     cout<< name[n] <<endl;
//     return revString(name , n-1);
// }


// int main(){
//     string name = "anitk";
//     int n = name.length()-1;

//     revString(name , n);
// }




// bool isPalindrome(string word , int start , int end){
//     if(start>=end){
//         return true;
//     }
//     if(word[start] != word[end]){
//         return false;
//     }
//     return isPalindrome(word , start + 1 , end - 1);
// }



// int main(){
//     string word = "racecar";
//     int end = word.size() -1;
//     cout<<isPalindrome(word ,0, end);
// }



// int main(){
//     int arr[] = {1,2,3,5,9};
//     int size = 4;
//     cout<<substr(arr , size , 0);
// }




