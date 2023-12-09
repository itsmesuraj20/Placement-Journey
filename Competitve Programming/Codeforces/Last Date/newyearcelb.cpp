#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,sum=0;
    cin>>x>>y>>z;
    int arr[3]={x,y,z};

    sort(arr,arr+3);
    for(int i=1;i<3;i++)
    {
        sum=sum+(arr[i]-arr[i-1]);
    }

    cout<<sum;

    return 0;
}

//MY TIME