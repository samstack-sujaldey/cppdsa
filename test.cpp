#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  int sqrtN = sqrt(n);
  int count = 0;
  for (int i = 1; i <= sqrtN; ++i) {
    if (n % i == 0) {
      ++count;
      if (i != n / i) {
        ++count;
      }
    }
  }
  if (count > 2 || count < 2) {
    cout << "not prime" << endl;
  } else {
    cout << "is prime" << endl;
  }
  return 0;
}
