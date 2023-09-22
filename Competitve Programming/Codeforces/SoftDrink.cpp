#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n, k, l, c, d, p, nl, np,a1=0,a2=0,l1=0,l2=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    /*
    n=10
    k=1000
    l=1000
    c=25
    d=23
    p=1
    nl=50
    np=1
    */
    a1=k*l;
    a2=a1/nl;

    l1=c*d;
    l2=p/np;

    int res=0;

    res=(min(min(a2,l1),l2))/n;

    cout<<res;
    return 0;


}