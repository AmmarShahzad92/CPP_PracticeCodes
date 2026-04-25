#include <iostream>
using namespace std;
int fact (int n) {
  if (n != 1) {
    return n*fact(n-1);
  }
  else {
    return 1;
  }
}
int main() {
  int i;
  cout << "i = ";
  cin >> i;
  cout << "Factorial of i = " << fact(i) << endl;
  return 0;
}
//write a program in c++ to make fibonacci series using recursion function call
//write a program in c++ to copy first array into second array
//write a program in c++ to copy first array into second array partially sub array
