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

  for (int i = 0; i < arr.size(); i++) {
    int j = i;

    while (j > 0 && arr[j - 1] < arr[j]) {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
  for (auto e : arr) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}
