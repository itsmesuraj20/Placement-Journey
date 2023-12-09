#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,5,1,4,5,8,6};

    for (int x: arr){
        cout<<x<<" ";
    }

    cout<<endl;
    
    for (auto x: arr)
    {
        cout<<x<<" ";

    }

    return 0;
}