#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x;
  vector<int> arr;
  while (cin >> x) {
    arr.push_back(x);
  }

  for (int i = arr.size() - 1; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (auto e : arr) {
    cout << e << " ";
  }

  cout << endl;
  return 0;
}
