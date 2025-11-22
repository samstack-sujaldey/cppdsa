#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    mp[arr[i]]++;
  }

  int q;
  cin >> q;
  while (q--) {
    int num;
    cin >> num;
    cout << mp[num] << endl;
  }
  return 0;
}
