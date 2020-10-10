#include <iostream>
#include <cassert>

using namespace std;

const int MAXN = 100;

int matrix[MAXN][MAXN];

// Retorna true si la matriz es cuadrado mágico.
// 2*O(n^2) + 2*O(n)
// ~O(n^2)
bool is_magic_square(int n) {
  assert(n >= 2);

  int want = 0;
  for (int c = 0; c < n; c++) { // O(n)
    want += matrix[0][c];
  }

  // Revisar la suma de todas las filas.
  for (int r = 0; r < n; r++) { // O(n^2)
    int sum = 0; // sum es la suma de la fila r
    for (int c = 0; c < n; c++) { // O(n)
      sum += matrix[r][c];
    }
    if (sum != want) { // O(1)
      return false; // O(1)
    }
  }

  // Revisar la suma de todas las columnas.
  for (int c = 0; c < n; c++) { // O(n^2)
    int sum = 0; // sum es la suma de la columna c
    for (int r = 0; r < n; r++) {
      sum += matrix[r][c];
    }
    if (sum != want) {
      return false;
    }
  }

  // Diagonal 1
  int sum = 0;
  for (int i = 0; i < n; i++) { // O(n)
    sum += matrix[i][i];
  }
  if (sum != want) {
    return false;
  }

  // Diagonal 2
  sum = 0;
  for (int i = 0; i < n; i++) { // O(n)
    sum += matrix[i][n-1-i];
  }
  if (sum != want) {
    return false;
  }

  return true;
}

int main() {
  int n;
  cin >> n;
  for (int r = 0; r < n; r++) { // n * O(n) = O(n^2)
    for (int c = 0; c < n; c++) { // n * O(1) = O(n)
      cin >> matrix[r][c]; // O(1)
    }
  }

  if (is_magic_square(n)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }


  return 0;
}