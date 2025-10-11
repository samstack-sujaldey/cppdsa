#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  string num = to_string(n);
  int l = 0;
  int r = num.length() - 1;
  bool check = true;
  while (check && l < r) {
    if (num[l] == num[r]) {
      l++;
      r--;
    } else {
      check = false;
      cout << "not palindrome" << endl;
      return 0;
    }
  }
  if (check) {
    cout << "is palindrome" << endl;
  }
  return 0;
}
