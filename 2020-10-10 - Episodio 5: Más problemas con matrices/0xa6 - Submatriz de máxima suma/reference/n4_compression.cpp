#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

const int MAXN = 50;

int a[MAXN][MAXN];

int main() {
  int rows, cols;
  cin >> rows >> cols;
  assert(1 <= rows and rows <= 50);
  assert(1 <= cols and cols <= 50);

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cin >> a[i][j];
    }
  }

  int answer = a[0][0];

  for (int r0 = 0; r0 < rows; ++r0) {
    vector<int> sum(cols, 0);
    for (int r1 = r0; r1 < rows; ++r1) {
      for (int c = 0; c < cols; ++c) {
        sum[c] += a[r1][c];
      }

      for (int left = 0; left < cols; ++left) {
        int option = 0;
        for (int right = left; right < cols; ++right) {
          option += sum[right];
          answer = max(answer, option);
        }
      }
    }
  }

  cout << answer << endl;
  return 0;
}