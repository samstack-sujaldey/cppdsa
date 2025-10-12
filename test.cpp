#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter N : ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  reverse(arr, arr + n);
  for (auto e : arr) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}
