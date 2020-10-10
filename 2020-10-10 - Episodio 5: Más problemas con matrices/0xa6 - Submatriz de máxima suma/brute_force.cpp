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
    }
  }



  int answer = numeric_limits<int>::min();
  // O(n^6)
  for (int r0 = 0; r0 < rows; r0++) {
    for (int c0 = 0; c0 < cols; c0++) {
      // La esquina superior izquierda de la submatriz es (r0, c0)
      for (int r1 = r0; r1 < rows; r1++) {
        for (int c1 = c0; c1 < cols; c1++) {
          // La esquina inferior derecha de la submatriz es (r1, c1)

          // Encontrar la suma de la submatriz delimitada por (r0, c0) y (r1, c1)
          int sum = 0;
          for (int r = r0; r <= r1; r++) {
            for (int c = c0; c <= c1; c++) {
              sum += m[r][c];
            }
          }
          answer = max(answer, sum);
        }
      }
    }
  }

  cout << answer << endl;
  return 0;
}