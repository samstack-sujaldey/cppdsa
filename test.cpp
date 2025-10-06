#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  int spaces = 2 * (n - 1);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1;
    }
    for (int j = 0; j < spaces; j++) {
      cout << " ";
    }
    for (int j = i; j >= 0; j--) {
      cout << j + 1;
    }
    cout << endl;
    spaces -= 2;
  }
  return 0;
}
