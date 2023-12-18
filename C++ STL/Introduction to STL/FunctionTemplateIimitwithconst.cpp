#include<bits/stdc++.h>
using namespace std;

template <typename T, int limit>
T arrmax(T arr[], int n)
{
    if(n>limit)
    {
        return -1;
    }
    T res = arr[0];
    for(int i = 1; i<n; i++)
    {
        if(arr[i] > res)
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    const int x=100;
    int arr1[]={10,40,3};
    float arr2[]={10.5,3.5,1.5,30.5};
    cout<<arrmax<int,x>(arr1,3)<<endl;
    cout<<arrmax<float,50>(arr2,4);
    return 0;
}