#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n, int &count) {
    count = 0; // Initializing the count variable
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            count++; // Incrementing count for each step
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {20,5,40,60,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int steps = 0;  
    insertionsort(arr,n,steps);

    for(int i = 0;i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Number of steps taken by the Algorithm is = " << steps<< endlhor;
    return 0;
}