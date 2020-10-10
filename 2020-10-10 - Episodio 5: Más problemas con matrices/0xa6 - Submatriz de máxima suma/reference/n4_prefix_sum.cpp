#include <iostream>
#include <cassert>
using namespace std;

const int MAXN = 50;

int a[MAXN][MAXN];
int sum[MAXN][MAXN];

int main() {
  int r, c;
  cin >> r >> c;
  assert(1 <= r and r <= 50);
  assert(1 <= c and c <= 50);

  for (int i = 0; i < r; ++i) {
    int sum_row = 0;
    for (int j = 0; j < c; ++j) {
      cin >> a[i][j];

      sum_row += a[i][j];
      sum[i][j] = sum_row;
      if (i - 1 >= 0) {
        sum[i][j] += sum[i-1][j];
      }
    }
  }

  int best = a[0][0];

  for (int r0 = 0; r0 < r; ++r0) {
    for (int c0 = 0; c0 < c; ++c0) {
      for (int r1 = r0; r1 < r; ++r1) {
        for (int c1 = c0; c1 < c; ++c1) {

          int s = sum[r1][c1];
          if (r0-1 >= 0) s -= sum[r0-1][c1];
          if (c0-1 >= 0) s -= sum[r1][c0-1];
          if (r0-1 >= 0 and c0-1 >= 0) s += sum[r0-1][c0-1];

          best = max(best, s);
        }
      }
    }
  }

  cout << best << endl;
  return 0;
}