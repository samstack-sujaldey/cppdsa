#include <iostream>
using namespace std;

void towerOFHanoi(int numOFDisks, char needle1, char needle3, char needle2);

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  towerOFHanoi(n, 'A', 'B', 'C');
  return 0;
}

void towerOFHanoi(int numOFDisks, char needle1, char needle3, char needle2) {
  if (numOFDisks > 0) {
    towerOFHanoi(numOFDisks - 1, needle1, needle2, needle3);
    cout << "Move disk " << numOFDisks << " from " << needle1 << " to "
         << needle3 << "." << endl;
    towerOFHanoi(numOFDisks - 1, needle2, needle3, needle1);
  }
}
