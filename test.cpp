#include <cctype>
#include <iostream>
using namespace std;

int main() {
  string s;
  cout << "enter s : ";
  cin >> s;
  int l = 0;
  int r = s.size() - 1;
  while (l < r) {
    if (!isalnum(s[l])) {
      l++;
    } else if (!isalnum(s[r])) {
      r--;
    } else if (tolower(s[l]) != tolower(s[r])) {
      cout << "not palindrome" << endl;
      return 0;
    } else {
      l++;
      r--;
    }
  }
  cout << "is palindrome" << endl;
  return 0;
}
