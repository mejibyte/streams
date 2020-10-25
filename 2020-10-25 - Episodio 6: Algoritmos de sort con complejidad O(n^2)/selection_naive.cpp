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

  // Selection sort
  vector<int> output(n);
  int alive = n;
  for (int next = 0; next < n; next++) {
    // Find the smallest element among the elements that are alive.
    for (int i = 0; i < alive-1; i++) {
      if (input[i] < input[alive-1]) {
        swap(input[i], input[alive-1]);
      }
    }

    // Here, input[best] is the smallest one.
    output[next] = input[alive-1];

    // Delete element at position best.
    alive--;
  }

  for (int i = 0; i < n; i++) {
    if (i > 0) cout << " ";
    cout << output[i];
  }
  cout << endl;

  return 0;
}