#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> input(n);
  for (int i = 0; i < n; i++) {
    cin >> input[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if (input[j] < input[i]) {
        swap(input[j], input[i]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    cout << input[i];
  }
  cout << endl;

  return 0;
}