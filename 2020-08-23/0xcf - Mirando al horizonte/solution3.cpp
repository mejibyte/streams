// O(n) solution using less space.
#include <iostream>
#include <vector>
#include <list>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  vector<int> next(n);
  for (int i = n - 1; i >= 0; --i) {
    next[i] = i + 1;
    while (next[i] < n and a[i] >= a[next[i]]) {
      next[i] = next[next[i]];
    }
  }
  for (int i = 0; i < n; ++i) {
    if (next[i] >= n) {
      cout << " -1";
    } else {
      cout << " " << a[next[i]];
    }
  }
  cout << endl;
}

int main() {
  int cases;
  cin >> cases;
  for (int c = 1; c <= cases; ++c) {
    cout << "Case #" << c << ":";
    solve();
  }
  return 0;
}