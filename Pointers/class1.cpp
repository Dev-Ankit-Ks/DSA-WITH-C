#include <iostream>
using namespace std;

int main() {
  /* Symbol table -> contain key value pair
  where key is variable name and vlaue is random address of variable value
  */

  //---------------------------------------------------------------------------

  /*
int a = 5;
& -> Used to see actual location of value(address)
cout << &a << endl;
  */

  //---------------------------------------------------------------------------

  // pointer -> stores the address of varibale value

  //---------------------------------------------------------------------------

  // Example
  /*
int a = 5; -> normal variable

int *p = &a; -> pointer varibale that store address of another varibale value

cout << p << endl; -> show address of value because you r accessing the pointer

varible; cout << *p << endl; -> show actual value
 */

  //---------------------------------------------------------------------------

  // if you want to know that how much space a varibale take then you can use
  // sizeof() methhod.

  // size of every pointer is 8
  // cout<<sizeof(p)<<endl;
  //---------------------------------------------------------------------------
  // Bad Pratice (always give value)
  // int *p;
  // cout << *p << endl;
  //---------------------------------------------------------------------------
  // sementation fault -> when you try to acces other memory not your
  //---------------------------------------------------------------------------
  // a
  // ptr
  //*ptr
  //&a and &p
  //---------------------------------------------------------------------------
  // int a = 5;
  // int *ptr = &a; -> original
  // int *crr = ptr; -> copied
  // cout << *ptr << endl;
  // cout << *crr << endl;
}