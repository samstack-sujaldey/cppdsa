#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> arr;
  int x;

  while (cin >> x) {
    arr.push_back(x);
  }

  unordered_map<int, int> mp;
  for (int i = 0; i < arr.size(); i++) {
    mp[arr[i]]++;
  }

  for (auto e : mp) {
    cout << e.first << " -> " << e.second << endl;
  }
  return 0;
}
