#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main() {
  int n;
  cin >> n;

  assert(n >= 1);

  bool sorted = true;
  int previous;
  cin >> previous;
  for (int i = 0; i < n; ++i) {
    int current;
    cin >> current;
    if (previous > current) {
      sorted = false;
    }
    previous = current;
  }

  if (sorted) {
    cout << "Ordenado" << endl;
  } else {
    cout << "Desordenado" << endl;
  }
  return 0;
}