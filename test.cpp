#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  int dup = n;
  int p = to_string(n).length();
  int ans = 0;
  while (n != 0) {
    int ld = n % 10;
    n /= 10;
    ans += pow(ld, p);
  }
  if (ans == dup) {
    cout << "is armstrong" << endl;
  } else {
    cout << "not armstrong" << endl;
  }
}
