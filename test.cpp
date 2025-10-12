#include <iostream>
#include <utility>
using namespace std;

void reverseArray(int arr[], int start, int end) {
  if (start < end) {
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
  }
}

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;

  int arr[n];

  cout << "enter array elements : ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  reverseArray(arr, 0, n - 1);

  for (auto e : arr) {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}
