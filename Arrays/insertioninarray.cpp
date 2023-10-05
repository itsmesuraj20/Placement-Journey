// #include<bits/stdc++.h>
// using namespace std;
// #define ff for(int i=0;i<n;i++)


// int insert(int *,int ,int ,int,int);

// int main()
// {
//     int n,x,cap,pos;
//     cin>>n>>x>>cap>>pos;
// /*
// n is the number of the array element
// x is the element to be inserted 
// cap is the capacity of the array
// pos is the position where it gonna be inserted
// */

//     int arr[n];
//     ff{
//         cin>>arr[i];
//     }
//     if(cap >= arr[n])
//     {
//         int result= insert(arr,n,x,cap,pos)
//         cout<<
//     }

//     else{
//         cout<<"Operation cant performed"<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Function to insert 'x' at 'pos' in the array 'arr' of capacity 'cap' and size 'n'
int insert(int *arr, int n, int x, int cap, int pos) {
    if (n >= cap) {
        return n; // The array is already at capacity, cannot insert.
    }

    // Shift elements to the right from the end to 'pos'
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x; // Insert 'x' at 'pos'
    return n + 1; // Increment the size of the array after insertion.
}

int main() {
    int n, x, cap, pos;
    cin >> n >> x >> cap >> pos;

    int arr[cap]; // Use 'cap' as the capacity for the array

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (pos < 0 || pos > n || n >= cap) {
        cout << "Operation can't be performed" << endl;
    } else {
        int newSize = insert(arr, n, x, cap, pos);

        cout << "Array after insertion:" << endl;
        for (int i = 0; i < newSize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
