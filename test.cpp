#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // pre-storing
  int hash[13] = {0};
  for (int i = 0; i < n; i++) {
    hash[arr[i]] += 1;
  }

  int q;
  cin >> q;
  while (q--) {
    int queries;
    cin >> queries;
    cout << hash[queries] << " ";
  }
  cout << endl;
  return 0;
}
