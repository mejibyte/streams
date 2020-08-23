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