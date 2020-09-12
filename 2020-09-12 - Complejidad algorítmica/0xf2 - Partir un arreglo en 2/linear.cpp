#include <vector>
#include <iostream>
using namespace std;


int main() {
  int n;
  cin >> n;
  int sum = 0;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    sum += a[i];
  }

  int left = 0;
  for (int i = 0; i < n; ++i) {
    int right = sum - left;
    if (left > 0 and right < 0) {
      cout << i << endl;
      return 0;
    }

    left += a[i];
  }
  cout << "Impossible" << endl;
  return 0;
}