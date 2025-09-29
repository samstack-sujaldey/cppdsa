#include <iostream>
using namespace std;

int decToBinary(int n) {
  int ans = 0, pow = 1;
  while (n > 0) {
    int rem = n % 2;
    n = n / 2;
    ans = ans + (rem * pow);
    pow *= 10;
  }
  return ans;
}

int main() {
  int decNum;
  cout << "enter num : ";
  cin >> decNum;

  cout << decToBinary(decNum) << endl;
  return 0;
}
