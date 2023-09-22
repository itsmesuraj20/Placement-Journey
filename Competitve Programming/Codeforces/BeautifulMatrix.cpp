//Help by Bard AI by GOOGLE;
#include <iostream>
using namespace std;

int main() {
  int arr[6][6], i, j, r, c;

  // Initialize the array
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      arr[i][j] = 0;
    }
  }

  // Take input for the array
  for (i = 1; i < 6; i++) {
    for (j = 1; j < 6; j++) {
      cin >> arr[i][j];
    }
  }

  // Find the coordinates of the 1 in the matrix
  for (i = 1; i < 6; i++) {
    for (j = 1; j < 6; j++) {
      if (arr[i][j] == 1) {
        r = abs(3 - i);
        c = abs(3 - j);
        cout << r + c << endl;
      }
    }
  }

  return 0;
}
