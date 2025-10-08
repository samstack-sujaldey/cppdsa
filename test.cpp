#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter N : ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - (i + 1); j++) {
      cout << " ";
    }
    char ch = 'A';
    for (int j = 0; j <= i; j++) {
      cout << ch;
      ch += 1;
    }
    for (int j = 1; j <= i; j++) {
      char ch = 'A';
      if (i >= 1) {
        cout << char(ch + (i - j));
      }
    }
    cout << endl;
  }
  return 0;
}
