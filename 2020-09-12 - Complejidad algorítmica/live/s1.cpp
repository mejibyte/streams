#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // O(n^2)
  for (int p = 0; p < n; p++) { // O(n)
    int left = 0, right = 0;
    // left = a[0] + a[1] + ... + a[p-1]
    for (int i = 0; i <= p - 1; i++) { // O(n)
      left += a[i]; // O(1)
    }
    // right = a[p] + a[p+1] + a[p+2] + ... + a[n-1]
    for (int i = p; i <= n - 1; i++) { // O(n)
      right += a[i]; // O(1)
    }

    if (left > 0 and right < 0) {
      cout << p << endl;
      return 0;
    }
  }
  cout << "Impossible" << endl;
  return 0;
}