#include <iostream>
using namespace std;

int printFibo(int n) {
  if (n <= 1) {
    return n;
  }
  int a = printFibo(n - 1);
  int b = printFibo(n - 2);
  return a + b;
}

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  for (int i = 0; i <= n; i++) {
    cout << printFibo(i) << " ";
  }
  cout << endl;
  return 0;
}
