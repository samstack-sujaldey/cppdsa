#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter N : ";
  cin >> n;
  int num = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      num += 1;
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}
