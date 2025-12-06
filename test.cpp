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
    int min = i;
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }

  for (auto e : arr) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}
