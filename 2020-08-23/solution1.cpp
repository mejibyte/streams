#include <iostream>
#include <vector>
using namespace std;

void solveCase() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    // Find j that satisfies our conditions.
    int answer = -1;
    for (int j = i + 1; j < n; ++j) {
      // Test if j satisfies the 3 conditions.
      //   * Condition #1 (i < j): Automatically satisfied because we explicitly
      //     set i + 1 <= j
      //   * Condition #2 (a[i] < a[j]): We test this in the if statement below.
      //   * Condition #3 (j is the smallest possible): Automatically satisfied
      //     since we visit j's in increasing order (smallest j's first).
      if (a[i] < a[j]) {
        answer = a[j];
        break;
      }
    }
    cout << " " << answer;
  }
  cout << endl;
}


int main() {
  int C;
  cin >> C;
  for (int caseNumber = 1; caseNumber <= C; ++caseNumber) {
    cout << "Case #" << caseNumber << ":";
    solveCase();
  }
  return 0;
}