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
  list<int> q;
  vector<int> answer(n);
  for (int i = n - 1; i >= 0; --i) {
    while (q.size() > 0 and a[i] >= q.front()) {
      q.pop_front();
    }
    answer[i] = q.size() == 0 ? -1 : q.front();
    q.push_front(a[i]);
  }
  for (int i = 0; i < n; ++i) {
    cout << " " << answer[i];
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