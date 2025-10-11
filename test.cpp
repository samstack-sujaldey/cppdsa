#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  int dup = n;
  int rev = 0;
  while (n != 0) {
    int ld = n % 10;
    n /= 10;
    rev = rev * 10 + ld;
  }
  if (rev == dup) {
    cout << "is palindrome" << endl;
  } else {
    cout << "not palindrome" << endl;
  }
  return 0;
}
