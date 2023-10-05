//Fibnacci Series
// 0 1 1 2 3 5 8 13 


#include<bits/stdc++.h>
using namespace std;
#define ff for(int i=3;i<=NumRange;i++)


int main ()
{
    int NumRange;
    cin>>NumRange;
    int firstEle=0,secEle=1,nextEle;
    cout<<firstEle<<" "<<secEle<<" ";
    
    ff{
        nextEle=firstEle+secEle;
        cout<<nextEle<<" ";
        firstEle=secEle;
        secEle=nextEle;
    }
    
    
    return 0;
    
}