#include<bits/stdc++.h>
using namespace std;

void nextGreater(int arr[], int n);

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    nextGreater(arr.data(), size);
    return 0;
}

void nextGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                cout << arr[j] << " ";
                break;
            }
        }
        if (j == n)
            cout << -1 << " ";
    }
}
