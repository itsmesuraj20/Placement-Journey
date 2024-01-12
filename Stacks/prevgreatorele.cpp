#include<bits/stdc++.h>
using namespace std;

void prevGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                cout << arr[j] << " ";
                break;
            }
        }
        if (j == -1) {
            cout << -1 << " ";
        }
    }
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    prevGreater(arr.data(), size);
    return 0;
}
