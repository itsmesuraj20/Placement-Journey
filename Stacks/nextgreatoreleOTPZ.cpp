#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(int arr[], int n);

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

     vector<int> result = nextGreater(arr.data(), size);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

// void nextGreater(int arr[], int n) {
//     stack<int> s;
//     vector<int> result(n);

//     for (int i = n - 1; i >= 0; i--) {
//         while (!s.empty() && s.top() <= arr[i]) {
//             s.pop();
//         }

//         result[i] = s.empty() ? -1 : s.top();
//         s.push(arr[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         cout << result[i] << " ";
//     }
// }

vector <int> nextGreater(int arr[], int n) {
    vector <int> v;
    stack<int> s;
    
    for (int i = n - 2; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }

        int ng = s.empty() ? -1 : s.top();
        v.push_back(ng);
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}