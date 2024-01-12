#include<bits/stdc++.h>
using namespace std;
void printSpan(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int span = 1;
        for (int j = i-1; j >= 0 && arr[j] <= arr[i] ; j--)
        {
            span++;
        }
        cout<<span<<" ";
    }
}


int main(){
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i = 0 ;i<size;i++){
        cin>>arr[i];
    }

    printSpan(arr.data(),size);
    return 0;
}