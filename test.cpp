#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  stack<int> stk;
  int rev = 0;
  while (n != 0) {
    int ld = n % 10;
    stk.push(ld);
    n /= 10;
    rev = rev * 10 + ld;
  }
  string chk2 = to_string(rev);
  bool check = true;
  int i = 0;
  while (!stk.empty() && check) {
    if (stk.top() != chk2[i] - '0') {
      check = false;
      break;
    }
    stk.pop();
    i++;
  }
  if (check) {
    cout << "is palindrome" << endl;
  } else {
    cout << "not palindrome" << endl;
  }
  return 0;
}
