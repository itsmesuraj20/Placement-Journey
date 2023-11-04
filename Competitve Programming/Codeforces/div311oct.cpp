#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string string1, s2;
        cin >> string1 >> s2;

        bool result = false;
        for (int i = 0; i <= 6; i++) {
            if (string1.find(s2) != -1) {
                result = true;
                cout << i << endl;
                break;
            }
            string1 += string1;
        }
        if (!result)
            cout << "-1\n";
    }
}
