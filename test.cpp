#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;
  int arr[n];
  cout << "enter array elements : ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int l = 0;
  int r = n - 1;
  while (l < r) {
    int temp;
    temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    l++;
    r--;
  }
  for (auto e : arr) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}
