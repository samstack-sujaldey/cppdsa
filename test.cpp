#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  vector<int> hashmap(256);
  for (int i = 0; i < s.length(); i++) {
    hashmap[s[i]]++;
  }
  int size;
  cin >> size;
  while (size--) {
    char ch;
    cin >> ch;
    cout << hashmap[ch] << endl;
  }
  return 0;
}
