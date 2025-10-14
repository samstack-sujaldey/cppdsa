#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  // pre - compute
  int hash[26] = {0};
  for (int i = 0; i < s.size(); i++) {
    hash[s[i] - 'a']++;
  }

  int n;
  cin >> n;
  while (n--) {
    char ch;
    cin >> ch;
    cout << hash[ch - 'a'] << endl;
  }
  return 0;
}
