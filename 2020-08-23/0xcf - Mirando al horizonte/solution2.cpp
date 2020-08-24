// O(n) solution.
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
  list<int> q; // A stack or a deque would both work just as well in this case.
  vector<int> answer(n);
  for (int i = n - 1; i >= 0; --i) {
    // At first sight this looks to be O(n^2) because the inner while loop
    // could take up to O(n). However, using amortized analysis we can prove
    // that it really is O(n). The main observation is that each element is
    // pushed at most once and popped at most once from the list, so after the
    // outer loop exits there have been at most O(2n) operations.
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