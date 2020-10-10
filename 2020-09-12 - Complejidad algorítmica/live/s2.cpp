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

  int left = 0, right = 0;
  for (int i = 0; i < n; i++) { // O(n)
    right += a[i];
  }
  // Aquí left = 0 y right = a[0] + ... + a[n-1]

  for (int p = 0; p < n; p++) { // O(n)
    // Aquí sabemos que left y right tienen el valor correcto.
    // Es decir:
    //   * left = a[0] + a[1] + ... + a[p-1]
    //   * right = a[p] + a[p+1] + ... + a[n-1]
    if (left > 0 and right < 0) {
      cout << p << endl;
      return 0;
    }

    // Aquí actualizar left y right para que estén correctos en la próxima
    // iteración del ciclo.
    left += a[p];
    right -= a[p];
  }
  cout << "Impossible" << endl;
  return 0;
}