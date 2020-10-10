#include <iostream>
#include <cassert>
using namespace std;

const int MAXN = 50;

int a[MAXN][MAXN];

int main() {
  int r, c;
  cin >> r >> c;
  assert(1 <= r and r <= 50);
  assert(1 <= c and c <= 50);

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cin >> a[i][j];
    }
  }

  int best = a[0][0];

  for (int r0 = 0; r0 < r; ++r0) {
    for (int c0 = 0; c0 < c; ++c0) {
      for (int r1 = r0; r1 < r; ++r1) {
        for (int c1 = c0; c1 < c; ++c1) {

          int sum = 0;
          for (int i = r0; i <= r1; ++i) {
            for (int j = c0; j <= c1; ++j) {
              sum += a[i][j];
            }
          }
          best = max(best, sum);
        }
      }
    }
  }

  cout << best << endl;
  return 0;
}