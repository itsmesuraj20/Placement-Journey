#include <bits/stdc++.h>
using namespace std;
bool areBrothers(const   string & name1, const   string &name2) {
      stringstream ss1(name1);
      stringstream ss2(name2);

      string first1, second1, first2, second2;
    ss1 >> first1 >> second1;
    ss2 >> first2 >> second2;

    return second1 == second2;
}

int main() {
      string input1, input2;
      getline(  cin, input1);
      getline(  cin, input2);

    if (areBrothers(input1, input2)) {
          cout << "ARE Brothers" <<   endl;
    } else {
          cout << "NOT" <<   endl;
    }

    return 0;
}
