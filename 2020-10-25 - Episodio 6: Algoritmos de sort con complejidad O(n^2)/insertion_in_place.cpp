#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> array(n);
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  for (int next = 0; next < n; next++) {
    for (int k = next; k-1 >= 0 and array[k-1] > array[k]; k--) {
      swap(array[k-1], array[k]);
    }
  }

  for (int i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    cout << array[i];
  }
  cout << endl;

  return 0;
}