#include <iostream>;
using namespace std;
#include <limits.h>;
#include <vector>;

// Main => Base case likho aur ek case solve krdo baki recursion sambhal lega


// Q.Print elements of array

// int ways(int arr[] , int size ,int index){
//     if(size == 0) return 0;
//     cout<<arr[index]<<endl;
//     return ways(arr , size - 1 , ++index);
// }

// int main(){
//     // Ek case tum solve krdo baki recursion sambhal lega
//     int index = 0;
//     int a[] = {1,9,3,2,3};
//     ways(a ,5 , index);

// }



// Q.Largest num in array

// void ways(int arr[], int size, int i, int &maxi) {
//     if (i >= size) return; 
//     if (arr[i] > maxi) {
//         maxi = arr[i];
//     }
//     ways(arr, size, i + 1, maxi);
// }

// int main() {
//     int arr[] = {9, 8, 12, 98, 0, 6};
//     int size = 6;
//     int maxi = INT_MIN;
//     int i = 0;

//     ways(arr, size, i, maxi);

//     cout << "answer: " << maxi << endl;
// }

//   Q.Find char in string

// string findChar(string name , int i , char find , int size){
//     if(i>= size) return "not found";
//     if(name[i] == find){
//         return string(1 , name[i]);
//     }
//     return findChar(name , i+1 , find , size);
// }

// int main(){
//     int i = 0;
//     string name = "ankit";
//     char find = 'd';
//     int size = 5;
//     cout<<findChar(name , i , find , size);
// }


// int findNums(int name , int i , int find, int size)
// {
    
// }
// int main(){
//     int i = 0;
//     int name = 9092;
//     int find = 7;
//     int size = 4;
//     cout<<findNums(name , i , find , size);
// } 


// Q.check array is sorted...

// bool checkSorted(vector<int> v , int &n , int i){
//     if(i == n-1){
//         return true;
//     }

//     if(v[i+1] < v[i]){
//         return false;
//     }
//     return checkSorted(v , n , i+1);
// }
// int main(){
//     vector<int> v{10,20 , 5,30,40,90};

//     int n = v.size();
//     int i  = 0;
//     bool isSorted = checkSorted(v , n , i);

//     if(isSorted){
//         cout<<"Array is sorted"<<endl;
//     }
//     else{
//         cout<<"Array is not sorted"<<endl;
//     }
// }

// Q. Find the number that required to sum the target
// int solve(vector<int> arr , int target){
//     if(target == 0){
//         return 0;
//     }
//     if(target < 0){
//         return INT_MAX;
//     }
//     int mini = INT_MAX;

//     for(int i = 0; i<arr.size(); i++){
//         int ans = solve(arr , target-arr[i]);
//         if(ans != INT_MAX)
//         mini = min(mini , ans + 1);
//     }

//     return mini;
// }

// int main(){
//     vector<int> arr{1,2};
//     int target = 5;

//     int ans = solve(arr , target);
//     cout<<"Answer : "<<ans <<endl;
// } 