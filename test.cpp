#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter N : ";
  cin >> n;
  for (int i = n; i > 0; i--) {
    char ch = 'A';
    for (int j = i; j > 0; j--) {
      cout << ch << " ";
      ch += 1;
    }
    cout << endl;
  }
  return 0;
}
