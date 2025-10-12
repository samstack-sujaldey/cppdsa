#include <iostream>
using namespace std;

int main() {
  string s;
  cout << "enter s : ";
  cin >> s;
  int l = 0;
  int r = s.length() - 1;
  while (l < r) {
    if (s[l] == s[r]) {
      ++l;
      --r;
    } else {
      cout << "Not Palindrome" << endl;
      return 0;
    }
  }
  cout << "Is Palindrome" << endl;
  return 0;
}
