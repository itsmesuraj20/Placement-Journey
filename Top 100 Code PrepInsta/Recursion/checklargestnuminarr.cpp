#include<bits/stdc++.h>
using namespace std;

int largeEl(int n,int arr[])
{
    if(n==1) return arr[0];

    return max(arr[n-1], largeEl(n-1, arr));
}   

int main()
{
    //I/P -  5 4 4 5 8 9 36
    //O/P -  36 

    int arr[] = {101,4,102,5,8,9,100};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<largeEl(len , arr);
    return 0;
}