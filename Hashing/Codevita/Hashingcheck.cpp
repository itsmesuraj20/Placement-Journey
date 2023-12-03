#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n); // Resizing the vector to have space for 'n' elements

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cout << mp[arr[i]] << " " << i << endl;
    }

    return 0;
}
    8 