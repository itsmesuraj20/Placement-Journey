#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1,2,3};
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}