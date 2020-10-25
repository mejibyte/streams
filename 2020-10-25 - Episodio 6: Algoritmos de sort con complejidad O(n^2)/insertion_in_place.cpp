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

  for (int i = 0; i < n; i++) { // n veces...
    bool did_something = false;
    for (int j = 0; j+1 < n; j++) {
      if (array[j] > array[j+1]) {
        swap(array[j], array[j+1]);
        did_something = true;
      }
    }
    if (!did_something) {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    cout << array[i];
  }
  cout << endl;

  return 0;
}