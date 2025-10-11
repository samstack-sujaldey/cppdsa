#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  int sqrtN = sqrt(n);
  vector<int> arr;
  for (int i = 1; i <= sqrtN; i++) {
    if (n % i == 0) {
      arr.push_back(i);
      if (i != n / i) {
        arr.push_back(n / i);
      }
    }
  }
  sort(arr.begin(), arr.end());
  for (auto ele : arr) {
    cout << ele << " ";
  }
  cout << endl;
  return 0;
}
