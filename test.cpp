#include <iostream>
using namespace std;

int largest(int arr[], int l, int r) {
  int max;
  if (l == r) {
    return l;
  } else {
    max = largest(arr, l + 1, r);
    if (arr[l] > max) {
      return arr[l];
    } else {
      return max;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << largest(arr, 0, n - 1) << endl;
  return 0;
}
