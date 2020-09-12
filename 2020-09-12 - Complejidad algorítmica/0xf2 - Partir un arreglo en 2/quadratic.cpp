#include <vector>
#include <iostream>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int r = 0; r < n; ++r) {
    int left = 0, right = 0;
    for (int i = 0; i < r; ++i) {
      left += a[i];
    }
    for (int i = r; i < n; ++i) {
      right += a[i];
    }
    if (left > 0 and right < 0) {
      cout << r << endl;
      return 0;
    }
  }
  cout << "Impossible" << endl;
  return 0;
}