#include <iostream>
#include <vector>

using namespace std;

int countPossibilities(string str) {
    int n = str.length();
    if (n < 3) {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 2; j < n; j++) {
            if (str[i] != str[i + 1] && str[i] != str[j] && str[i + 1] != str[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    string a, b;
    cin >> a >> b;

    int aCount = countPossibilities(a);
    int bCount = countPossibilities(b);

    if (aCount > bCount) {
        cout << "Anand" << endl;
    } else if (bCount > aCount) {
        cout << "Ashok" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}
