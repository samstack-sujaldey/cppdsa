#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k;
  cin >> k;

  deque<int> dq;
  vector<int> arr;
  int x;
  while (cin >> x) {
    arr.push_back(x);
  }

  vector<int> res;

  for (int i = 0; i < arr.size(); i++) {
    if (!dq.empty() && dq.front() <= i - k) {
      dq.pop_front();
    }

    while (!dq.empty() && arr[dq.back()] <= arr[i]) {
      dq.pop_back();
    }

    dq.push_back(i);

    if (i >= k - 1) {
      res.push_back(arr[dq.front()]);
    }
  }

  for (auto e : res) {
    cout << e << " ";
  }
  cout << endl;
  return 0;
}
