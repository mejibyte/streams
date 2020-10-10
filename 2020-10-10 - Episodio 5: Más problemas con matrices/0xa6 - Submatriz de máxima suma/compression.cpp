#include <iostream>
#include <vector>
#include <limits>
using namespace std;


int max_subarray(const vector<int> &a) {
  int best = numeric_limits<int>::min();
  for (int i = 0; i < a.size(); i++) {
    int sum = 0;
    for (int j = i; j < a.size(); j++) {
      sum += a[j];
      best = max(best, sum);
    }
  }
  return best;
}

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
  for (int r0 = 0; r0 < rows; r0++) {
    vector<int> compressed_rows(cols);
    for (int r1 = r0; r1 < rows; r1++) {
      // Comprimir todos los valores entre las filas r0 y r1 en un solo arreglo.
      for (int c = 0; c < cols; c++) {
        compressed_rows[c] += m[r1][c];
      }
      // Aquí, sum es un arreglo de "cols" posiciones que contiene toda la
      // matriz entre las filas r0 y r1 comprimidas en un solo arreglo.
      answer = max(answer, max_subarray(compressed_rows));
    }
  }

  cout << answer << endl;
  return 0;
}