#include <iostream>
#include <vector>
#include <limits>
using namespace std;


int main() {
  int rows, cols;
  cin >> rows >> cols;

  vector<vector<int>> m(rows, vector<int>(cols));
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      cin >> m[r][c];
      if (r - 1 >= 0) m[r][c] += m[r-1][c];
      if (c - 1 >= 0) m[r][c] += m[r][c-1];
      if (r - 1 >= 0 and c - 1 >= 0) m[r][c] -= m[r-1][c-1];
    }
  }

  int answer = numeric_limits<int>::min();
  // O(n^4)
  for (int r0 = 0; r0 < rows; r0++) {
    for (int c0 = 0; c0 < cols; c0++) {
      // La esquina superior izquierda de la submatriz es (r0, c0)
      for (int r1 = r0; r1 < rows; r1++) {
        for (int c1 = c0; c1 < cols; c1++) {
          // La esquina inferior derecha de la submatriz es (r1, c1)

          // Encontrar la suma de la submatriz delimitada por (r0, c0) y (r1, c1)
          int sum = m[r1][c1];
          if (r0-1 >= 0) sum -= m[r0-1][c1];
          if (c0-1 >= 0) sum -= m[r1][c0-1];
          if (r0-1 >= 0 and c0-1 >= 0) sum += m[r0-1][c0-1];
          answer = max(answer, sum);
        }
      }
    }
  }

  cout << answer << endl;
  return 0;
}